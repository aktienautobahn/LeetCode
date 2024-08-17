# 20. Valid Parentheses
**Solved**  
**Easy**

## Problem Statement

Given a string `s` containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['`, and `']'`, determine if the input string is valid.

An input string is valid if:
- Open brackets must be closed by the same type of brackets.
- Open brackets must be closed in the correct order.
- Every close bracket has a corresponding open bracket of the same type.

## Examples

### Example 1:
**Input:** `s = "()"`  
**Output:** `true`

### Example 2:
**Input:** `s = "()[]{}"`  
**Output:** `true`

### Example 3:
**Input:** `s = "(]"`  
**Output:** `false`

## Constraints

- `1 <= s.length <= 10^4`
- `s` consists of parentheses only `'()[]{}'`.

## Solution

### Time Complexity:
Main Loop: The loop iterates over the string once, performing constant-time operations (push/pop) on the stack. This results in O(n) time complexity, where n is the length of the string.
### Space Complexity:
Stack Usage: In the worst case, the stack can hold up to n/2 elements, leading to O(n) space complexity.
### Summary:
Time Complexity: O(n)
Space Complexity: O(n)