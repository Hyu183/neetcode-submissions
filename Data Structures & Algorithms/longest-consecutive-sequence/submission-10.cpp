class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> mp;
        int res = 0;
        for (const int& n : nums) {
            if (mp.find(n) != mp.end()) continue;
            int left = mp.find(n - 1) == mp.end() ? 0 : mp[n - 1];
            int right = mp.find(n + 1) == mp.end() ? 0 : mp[n + 1];
            mp[n] = left + 1 + right;
            if(left != 0){
                mp[n - mp[n-1]] = mp[n];
            }
            if(right != 0){
                mp[n + mp[n+1]] = mp[n];
            }
            res = max(res, mp[n]);
        }
        return res;
    }
};
