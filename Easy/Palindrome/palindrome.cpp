#include <string>
class Solution {
  public:
    bool isPalindrome(int x) {
      if (x < 0) return false; // edge case
      
      std::string stringified_x = std::to_string(x);
      size_t size = stringified_x.size();
      size_t i = 0; // first index
      size_t j = size - 1; // last index
      /*
       * Edge cases
       */
       
      if (size < 1) return false;
      if (size = 1) return true;
      if (size = 2) return stringified_x[i] == stringified_x[j];
      // Base case 
      while (j > i) {
        if (stringified_x[i] != stringified_x[j]) return false;
        i++;
        j--;
      }



      return true;

    }
};
