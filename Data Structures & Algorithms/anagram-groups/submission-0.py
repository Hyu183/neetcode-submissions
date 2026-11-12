class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        s = []
        for i in range(len(strs)):
            s.append(''.join(sorted(strs[i])))

        for i in range(len(strs)):
            print(s[i])

        res = []

        i = 0
        nextStart = 0
        v = {}
        while len(v) < len(strs):
            d = []
            j = i
            firstNe = True
            while j < len(strs):
                if s[j] == s[i]:
                    if j not in v:
                        d.append(strs[j])
                        v[j] = True
                elif firstNe and j not in v:
                    nextStart = j
                    firstNe = False
                j += 1
            i = nextStart
            res.append(d)

        return res  