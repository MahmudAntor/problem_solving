Problem Link: https://leetcode.com/problems/maximum-product-subarray/

Problem Type: Array

Solution: Similar to kadane algorithm, Dynamic solution.
    -> by multiplying nums[i] to a previous max product
    -> by multiplying nums[i] to a previous min product (since both these numbers might be negative, it’s worthwhile to compute this value)
    -> nums[i] might itself be the largest

Complexity Analysis:
	Time complexity : O(n)
	Space complexity : O(1)
