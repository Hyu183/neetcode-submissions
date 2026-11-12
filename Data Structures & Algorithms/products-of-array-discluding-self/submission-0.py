class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        p = 1
        hasZero = False
        for i in nums:
            if hasZero and i == 0:
                return [0]*len(nums)
            elif i == 0:
                hasZero = True
            else: 
                p*=i
        ans = []
        for i in nums:
            if hasZero:
                if i == 0:
                    ans.append(p)
                else:
                    ans.append(0)
            else:
                ans.append(p//i)
        return ans
