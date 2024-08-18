#include <iostream>
#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {

        if (nums.size() < 2) return nums.size(); // edge case
        int uniqueIndex = 0; // first element [0] is always unique

        for (int i = 1; i < nums.size(); i++) {
            if (nums[uniqueIndex] != nums[i]) {
               nums[++uniqueIndex] = nums[i];
            } 
        }


    return uniqueIndex + 1;
    }
};

int main() {
    std::vector<int> vec = {1, 1, 2};
    
    Solution obj;
    int value = obj.removeDuplicates(vec);
    std::cout << value << std::endl;
    return 0;
}