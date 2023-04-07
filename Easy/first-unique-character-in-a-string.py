class Solution:
    def firstUniqChar(self, s: str) -> int:
        for i in range(len(s)):
            if s[i] in s[i+1:]:

                res = -1
                continue

            elif s[i] not in s[:i]:

                res = i
                break

        return res