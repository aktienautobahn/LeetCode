#include <string>
#include <vector>
#include <algorithm>


class Solution {
public:
    std::string addBinary(std::string a, std::string b) {
        // full adder with binary logic on strings
        // iterate from the last element to the first one 
        // and pass the carry to the higher (to the left) position if needed.
        std::vector<bool> outputVector;
        std::string result;
        int maxLen = std::max(a.size(), b.size());
        int i = a.size() - 1; // last element of a
        int j = b.size() - 1; // last element of b
        bool sum = false;
        bool carryIn = false;
        bool aBool = false;
        bool bBool = false;
        
        while (maxLen > 0) {
            // if both elements exist case
            if (i >= 0 && j >= 0) {
                // convert char to bit
                aBool = (a[i] - '0') != 0;
                bBool = (b[j] - '0') != 0;
                i--;
                j--;
            }
            // only one element exist case
            else {
                if (i >= 0) {
                // convert char to bit
                    aBool = (a[i] - '0') != 0;
                    bBool = false;
                    i--;
                } else if (j >= 0) { // j > 0
                    aBool = false;
                    bBool = (b[j] - '0') != 0;
                    j--;
                }

            }
                // bitweise logical ops
                sum = aBool ^ bBool ^ carryIn;
                carryIn = (aBool & bBool) | (carryIn & (aBool ^ bBool));
                // Append the current sum to the result string
                result.push_back(sum ? '1' : '0');
                maxLen--;
        }
        // last carryIn insertion
        if (carryIn) {
                result.push_back(carryIn ? '1' : '0');       
        }
        std::reverse(result.begin(), result.end());
        return result;
    }
    
};

int main() {
    std::string stringA = "11";
    std::string stringB = "1";

    Solution obj;
    obj.addBinary(stringA, stringB);
    return 0;
}