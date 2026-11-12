class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        count = {}

        for i in s:
            count[i] = 1 if i not in count else count[i] + 1

        for i in t:
            if i not in count or count[i] < 0:
                return False
            else:
                count[i] -= 1

        for c in count:
            if count[c] != 0:
                return False

        return True