class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
      start_index = max_len = 0
      last_index = {}
      for i in range(len(s)):
        if s[i] in last_index:
          start_index = max(start_index, last_index[s[i]] + 1)
        max_len = max(max_len, i-start_index + 1)
        last_index[s[i]] = i
      return max_len
          
      
x = Solution()
print(x.lengthOfLongestSubstring("aabcaa"))