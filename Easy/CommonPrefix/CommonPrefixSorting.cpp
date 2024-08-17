#include <iostream>
#include <vector>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        // basic algorithm
        // sort the vector, then get the length of the shortest element between the first and the last one
        // iterate first&last strings from the 1st char till the len of the shortest element
        // compare by comparing chars and adding the char to commonPrefix string, if equal

        std::string commonPrefix = "";
        int vecLen = strs.size();
        
        // edge cases
        if (vecLen == 0) return commonPrefix;
        if (vecLen == 1) return strs[0];

        // common cases
        std::sort(strs.begin(), strs.end());
        // Get the size of the smallest element between the first and the last element
        size_t lenMinElement = std::min(strs[0].size(), strs.back().size());

        for (int i = 0; i < lenMinElement; i++) {
            if (strs[0][i] == strs[vecLen - 1][i]) {
                commonPrefix += strs[0][i];
            } else {
                return commonPrefix;
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

