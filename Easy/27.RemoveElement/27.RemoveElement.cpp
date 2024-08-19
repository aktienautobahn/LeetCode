#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {

        int right = nums.size() - 1;

        for (int left = 0; left <= right; left++) {
            if (nums[left] == val) {
                while(right > left && nums[right] == val) {
                    right--;
                }
                nums[left] = nums[right--];
            }
        }
        return right + 1;
    }
};