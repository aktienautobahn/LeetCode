#include <iostream>
#include <vector>

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1, mid;
        if (nums[nums.size() - 1 ] < target) return nums.size(); // bigger than sequence
        else if (nums[0] > target) return 0; // smaller than sequence
        else {             // find the suitable position
            while (r >= l) {
                mid = l + (r - l) / 2;
                if (target == nums[mid]) return mid;
                if (target < nums[mid]) r = mid - 1;
                else l = mid + 1;
            }
        }
    return l;
    }
};


int main() {
    std::vector<int> vec = {1,3,5,6};
    int num = 2;
    
    Solution obj;
    int value = obj.searchInsert(vec, num);
    std::cout << value << std::endl;
    return 0;
}