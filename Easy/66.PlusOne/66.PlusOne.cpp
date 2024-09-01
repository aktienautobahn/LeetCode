#include <vector>

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        // iterate from the last element to the first one 
        // and pass the carry to the higher (to the left) position if needed.
        int i = digits.size() - 1; // last element
        
        while (i > 0) {
            if(digits[i] + 1 < 10) {
               digits[i]++;
               return digits; 
            } else { // carry case
                digits[i] = 0;
            }
            i--;
        }

        // edge case (new element needed)
        if (i == 0) {
            if(digits[i] + 1 < 10) {
               digits[i]++;
               return digits; 
            } else { // carry case
                digits[i] = 0;
            }
            digits.insert(digits.begin(), 1); // inserting carry
        }
        return digits;
    }
};
