class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       
        vector<int> ans;
        vector<pair<int,int>> v;
        unordered_map<int,int> memo;

        
        for(auto &x:nums)
            memo[x]++;
        for(auto &m:memo)
            v.emplace_back(m.second,m.first);
        sort(v.begin(),v.end());
        int i = v.size();
        while(k--)
            ans.push_back(v[--i].second);
        
        return ans;

    }
};
