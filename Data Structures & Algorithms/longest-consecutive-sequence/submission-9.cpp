class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());

        int maxL = 0;
        for (const int& n : s) {
            if (s.count(n - 1)) continue;
            int cnt = 1;
            while (s.count(n + cnt)) {
                ++cnt;
            }
            maxL = max(maxL, cnt);
        }
        return maxL;
    }
};
