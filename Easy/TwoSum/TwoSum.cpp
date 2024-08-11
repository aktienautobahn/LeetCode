class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    size_t sum = 0; // init 0
    vector<int> result;

    size_t size = nums.size();
    for (size_t i = 0; i < size; i++) {
      for (size_t j = i + 1; j < size; j++ ) {
        sum = nums[i] + nums[j];
        if (sum == target) {
          result.push_back(i);
          result.push_back(j);
          return result;
        }
      }
    }
    return result;
  }
}
