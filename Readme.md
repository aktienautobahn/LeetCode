# DSA (Data Structures and Algorithms) LeetCode Solutions using C++

Welcome to my repository where I showcase my journey in mastering Data Structures and Algorithms (DSA) problems using C++. This repository is a growing collection of solutions to common algorithmic challenges, categorized by difficulty.

## 🚀 Current Progress
[View on Leetcode](https://leetcode.com/u/aktienautobahn/)

### Easy Level

1. **Two Sum**
   - **Problem Statement:** Given an array of integers `nums` and an integer `target`, return the indices of the two numbers such that they add up to `target`.
   - **Solution:** Implemented an efficient solution using a hash map to achieve O(n) time complexity.

   [View Solution](./Easy/TwoSum/TwoSum.cpp)

2. **Palindrome**
   - **Problem Statement:** Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
   - **Solution:** Implemented a two-pointer technique to compare characters from both ends.

   [View Solution](./Easy/Palindrome/palindrome.cpp)

3. **Roman to Integer**
   - **Problem Statement:** Convert a given Roman numeral to its corresponding integer value, taking into account the subtraction rules for certain numeral pairs.
   - **Solution:** Implemented a mapping of Roman numerals to integers and iterated through the string, adding or subtracting values based on the numeral rules.

   [View Solution](./Easy/Roman/Roman.cpp)

4. **Merge Two Sorted Lists**
   - **Problem Statement:** Merge two sorted linked lists into one sorted list by splicing together the nodes.
   - **Solution:** Implemented a two-pointer technique to iterate through both lists, merging nodes in sorted order into a new list.

   [View Solution](./Easy/MergeTwoSortedLists/MergeTwoSortedLists.cpp)

5. **Longest Common Prefix**
   - **Problem Statement:** Find the longest common prefix string amongst an array of strings. If no common prefix exists, return an empty string.
   - **Solution:** Implemented a horizontal scanning approach, comparing prefixes of each string iteratively to determine the longest common prefix.

   [View Solution](./Easy/CommonPrefix/CommonPrefix.cpp)

6. **Valid Parentheses**
   - **Problem Statement:** Determine if a string containing only parentheses is valid, ensuring that open brackets are closed by the same type of brackets and in the correct order.
   - **Solution:** Utilized a stack-based approach to track open brackets and ensure they are closed in the correct order by the corresponding bracket type.

   [View Solution](./Easy/ValidParentheses/ValidParentheses.cpp)

7. **Remove Duplicates from Sorted Array**
   - **Problem Statement:** Remove duplicates from a sorted array in-place, ensuring that each unique element appears only once. Return the number of unique elements.
   - **Solution:** Implemented a two-pointer technique to overwrite duplicate elements and maintain the order of unique elements in the array.

   [View Solution](./Easy/26.RemoveDuplicates/26.RemoveDuplicatesOptimized.cpp)


8. **Remove Element**
   - **Problem Statement:** Remove all occurrences of a specified value from an array in-place, modifying the array so that the first `k` elements are those not equal to the given value. Return `k`, the count of elements that remain after removal.
   - **Solution:** Implemented a two-pointer approach to overwrite elements equal to the specified value, without maintaining the order of the remaining elements.

   [View Solution](./Easy/27.RemoveElement/27.RemoveElement.cpp)

9. **Find the Index of the First Occurrence in a String**
   - **Problem Statement:** Given two strings, `needle` and `haystack`, return the index of the first occurrence of `needle` in `haystack`, or `-1` if `needle` is not found.
   - **Solution:** Implemented a string matching approach to search for the first occurrence of `needle` within `haystack` and return the corresponding index.

   [View Solution](./Easy/28.IndexOfFirstOccurence/28.IndexOfFirstOccurence.cpp)

10. **Length of Last Word**
   - **Problem Statement:** Given a string `s` consisting of words and spaces, return the length of the last word in the string.
   - **Solution:** Trim trailing spaces and find the length of the last word by splitting the string or iterating backward until the first non-space character is encountered.

   [View Solution](./Easy/58.LengthOfLastWord/58.LengthOfLastWord.cpp)

## 🛠️ Tools & Technologies

- **Language:** C++
- **PDE:** tmux + Neovim 
- **Version Control:** Git
- **Hardware:** Apple Silicon M1 Pro

## 📈 Future Plans

- **Expand to Medium and Hard Problems:** Continuing to tackle more complex problems.
- **Optimization:** Revisit solutions to optimize for space and time complexity.
- **Documentation:** Add more detailed explanations and comments within the code.

## 🤝 Contributing

Suggestions, optimizations, and contributions are welcome! Please feel free to open an issue or submit a pull request.

## 📄 License

This repository is licensed under the MIT License. See the [LICENSE](./LICENSE) file for more details.

