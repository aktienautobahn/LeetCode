# 21. Merge Two Sorted Lists
**Solved**  
**Easy**

## Problem Statement

You are given the heads of two sorted linked lists `list1` and `list2`.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

## Examples

### Example 1:
**Input:** `list1 = [1,2,4]`, `list2 = [1,3,4]`  
**Output:** `[1,1,2,3,4,4]`

![Example 1 Merge](./merge_ex1.jpg)

### Example 2:
**Input:** `list1 = []`, `list2 = []`  
**Output:** `[]`

### Example 3:
**Input:** `list1 = []`, `list2 = [0]`  
**Output:** `[0]`

## Constraints

- The number of nodes in both lists is in the range `[0, 50]`.
- `-100 <= Node.val <= 100`
- Both `list1` and `list2` are sorted in non-decreasing order.

## Result on custom lists
Input:
`list1 = {1, 2, 4, 5, 6, 9, 10}`
`list2 = {1, 3, 4, 7, 8, 10, 11`
Output:
`1 -> 1 -> 2 -> 3 -> 4 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9 -> 10 -> 10 -> 11`
**Runtime:** `0.000458ms`
