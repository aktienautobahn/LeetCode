#include <iostream>
#include <vector>
#include <algorithm> // std::min_element
#include <iterator>  // std::begin, std::end

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        std::string commonPrefix = "";
        int counter = 0;
        int vecLen = strs.size();
        
        // edge cases
        if (vecLen == 0) return commonPrefix;
        if (vecLen == 1) return strs[0];


        // common cases
        // get the length of the shortest string
        int lenMinElement = strs[0].size();

        for (const std::string& str : strs) {
            if (str.size() < lenMinElement) {
                lenMinElement = str.size();
            }
        }

        // iterate over all strings from the 1st char till the len of the shortest element
        // compare all prefixes by iteratively comparing chars and counting up
        // if the chars are equal , copy to commonPrefix, else and return the commonPrefix string

            for (int i = 0; i < lenMinElement; i++) {
                for (int j = vecLen - 1; j > 0; j--) {
                    if (!strs[j].empty() && !strs[j-1].empty()) {
                        if (strs[j][i] == strs[j-1][i]) {
                            counter++;
                        } else {
                            return commonPrefix;
                        }
                    }
                    if (counter == vecLen - 1) {
                        commonPrefix += strs[j][i];
                        counter = 0;
                    }; // all elements' chars are equal

                }

        }
        return commonPrefix;
    }
};


int main() {
    std::vector<std::string> strs = {"flower","flow","flight"};

    Solution obj;
    std::string commPref = obj.longestCommonPrefix(strs);

    std::cout << commPref << std::endl; 

    return 0;
}

