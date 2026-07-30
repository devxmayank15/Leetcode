class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> ans;
        unordered_map<int , int> mp;
        vector<pair<int,int>> temp;
        for (int ch: nums)
            mp[ch]++;
        for (auto x: mp)
            temp.push_back({x.second, x.first});

        sort(temp.rbegin(), temp.rend());
        
        for(int i=0;i<k;i++)
            ans.push_back(temp[i].second);   
        
    return ans;
    }
};