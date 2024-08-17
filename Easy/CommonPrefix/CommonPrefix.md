# 14. Longest Common Prefix
**Solved**  
**Easy**

## Problem Statement

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string `""`.

## Examples

### Example 1:
**Input:** `strs = ["flower","flow","flight"]`  
**Output:** `"fl"`

### Example 2:
**Input:** `strs = ["dog","racecar","car"]`  
**Output:** `""`  
**Explanation:** There is no common prefix among the input strings.

## Constraints

- `1 <= strs.length <= 200`
- `0 <= strs[i].length <= 200`
- `strs[i]` consists of only lowercase English letters.

## Solutions 

### Time Complexity:
- Solution 1 CommonPrefix.cpp (Character-by-Character): O(n * m)
- Solution 2 CommonPrefixSorting.cpp (Sorting-Based): O(n log n * m)
Analysis:


**Solution 1** avoids the sorting step, making it potentially more efficient, especially when the number of strings is large.
**Solution 2**'s sorting step can become expensive if n (number of strings) is large. The log n factor in the sorting-based solution makes it less efficient compared to Solution 2 when n is large.
### Space Complexity:
Both solutions have the same space complexity: O(m).

### Practical Performance:

**Solution 1** is likely to perform better on larger datasets where the cost of sorting becomes significant. It directly compares characters without the need for sorting, which is a more direct approach.
**Solution 2** is more straightforward and can be faster for smaller datasets where the overhead of sorting is negligible.

### Conclusion:

**Solution 1** is more efficient for large inputs with many strings since it has a linear complexity relative to the number of strings (O(n * m)), making it preferable in scenarios where n is large.

**Solution 2** is generally simpler to implement and understand but may not be the most efficient for large datasets due to the O(n log n * m) complexity.