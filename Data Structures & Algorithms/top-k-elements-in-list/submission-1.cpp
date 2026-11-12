class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>> bucket(n + 1, vector<int>(0));
        unordered_map<int,int> m;
        for(auto num : nums){
            ++m[num];
        }

        for(auto p : m){
            bucket[p.second].push_back(p.first);
        }

        vector<int> res;
        int cur = n;
        int i = 0;
        while(i < k){
            int nn = bucket[cur].size();
            int j = 0;
            while(j < nn && i < k){
                res.push_back(bucket[cur][j]);
                ++j;
                ++i;
            }
            --cur;
        }
        return res;
    }
};
