#include <iostream>
#include <string>
#include <unordered_map>

class Solution {
public:
    int romanToInt(std::string s) {
        std::unordered_map<char, int> mp = {{'I', 1}, 
                                        {'V', 5}, 
                                        {'X', 10}, 
                                        {'L', 50}, 
                                        {'C',100}, 
                                        {'D', 500}, 
                                        {'M', 1000}};

        int previous = 0;
        int sum = 0;
        int current = 0;
        
        // parse from the right to left
        for (int i = s.length()-1; i >= 0; i--) {
            // retrieving the value
            auto it = mp.find(s[i]);
            if (it != mp.end()) {
                current = it->second;
            } else {
                // Key not found
                std::cout << "not found";
            }

            // compare with previous value
            if (previous <= current) { // if the value is bigger or equals than the previous one, add up
                sum += current;

            } else {
            // if the value is smaller than the previous one, substract
                sum -= current;
            }

            previous = current;

        }
        return sum;
    }
};


int main(void) {

    // Instantiating the class
    Solution obj;

    // Calling a method
    int result = obj.romanToInt("MDCCLIX"); 
    std::cout << result << '\n';
    
    return 0;
}
