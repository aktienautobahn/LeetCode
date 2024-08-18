#include <iostream>
#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {

        if (nums.size() < 2) return nums.size(); // edge case

        // loop over the array from the end and "move" the current element if equals to the previous
        for (int i = nums.size() - 1 ; i > 0; i--) {
            if (nums[i] == nums[i-1]) {
                // copy all the numbers to the right
                for (int j = i; j <= nums.size() - 1; j++) {
                    if (j == nums.size() - 1) nums.pop_back();
                    else nums[j] = nums[j+1];
                }
            }
        }

    return nums.size();
    }
};

int main() {
    std::vector<int> vec = {1, 1, 2};
    
    Solution obj;
    int value = obj.removeDuplicates(vec);
    std::cout << value << std::endl;
    return 0;
}