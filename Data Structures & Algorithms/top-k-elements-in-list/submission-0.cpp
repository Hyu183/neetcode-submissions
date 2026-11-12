class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> m;
        for(int i= 0; i < n ; ++i){
            ++m[nums[i]];
        }

        auto cmp = [](pair<int,int> a , pair<int,int> b) {
            return a.second < b.second;
        };
        priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(cmp)> q(cmp);
        for(auto p : m){
            q.emplace(p);
        }


        vector<int> res(k);
        for(int i =0 ;i < k ; ++i){
            res[i]= q.top().first;
            q.pop();
        }
        

        return res;
    }
};
