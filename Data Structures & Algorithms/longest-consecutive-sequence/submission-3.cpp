class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        unordered_map<int, bool> m;
        for (int n : nums) {
            m[n] = false;
        }
        int maxL = 1;
        for (int n : nums) {
            if (m[n]) continue;
            int i = n;
            int cnt = 0;
            while (m.find(i) != m.end()) {
                m[i] = true;
                ++cnt;
                ++i;
            }
            maxL = max(maxL, cnt);
        }
        return maxL;
    }
};
