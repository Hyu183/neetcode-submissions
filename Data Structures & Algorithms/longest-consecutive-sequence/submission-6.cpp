class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        set<int> s;
        for(int n:nums){
            if(s.count(n) == 0) {
                s.insert(n);
            }
        }

        int maxL = 1;
        for(const int& n : s){
            if(s.count(n-1)) continue;
            int i = n;
            int cnt = 0;
            while(s.count(i)){
                ++i;
                ++cnt;
            }
            maxL = max(maxL, cnt);
        }
        return maxL;
    }
};
