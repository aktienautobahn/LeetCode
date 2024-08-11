class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    size_t sum = 0; // init 0
    vector<int> result;

    size_t size = nums.length();
    for (size_t i = 0; i < size; i++) {
      for (size_t j = i; j < size; j++ ) {
        sum = nums[i] + nums[j];
        if (sum == target) {
          result.push_back(nums[i]);
          result.push_back(nums[j]);
        }
      }
    }
  }
}
