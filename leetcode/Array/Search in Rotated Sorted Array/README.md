Problem Link: https://leetcode.com/problems/search-in-rotated-sorted-array/

Problem Type: Array

Solution: Modified binary search. Either the left array will be sorted, or the right. We will check if the target is in the sorted array and update start and end indexes accordingly. 

Complexity Analysis:
	Time complexity : O(log(n))
	Space complexity : O(1)
