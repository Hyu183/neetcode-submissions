class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        pre = [1]*n
        suf = [1]*n
        ans = [1]*n

        for i in range(0,n):
            j = n - 1 - i
            if i - 1 < 0: 
                continue
            else:
                pre[i] = pre[i-1] * nums[i-1]   
                suf[j] = suf[j+1] * nums[j+1]
        for i in range(0,n):
            ans[i] = pre[i]*suf[i]

        return ans
    
