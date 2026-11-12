class Solution:

    def encode(self, strs: List[str]) -> str:
        res = ""
        for s in strs:
            n = str(len(s))
            res = res +str(len(n)) + n + s
        return res

    def decode(self, s: str) -> List[str]:
        res = []
        i = 0
        while i < len(s):
            print(i)
            j = int(s[i])
            n = ""
            for k in range(i+1,j+i+1):
                n+=s[k]
            nn = int(n)
            t = ""
            for kk in range(j+i+1, j +i + nn + 1):
                t += s[kk]
            i = j + i + 1 + nn
            res.append(t)
        return res