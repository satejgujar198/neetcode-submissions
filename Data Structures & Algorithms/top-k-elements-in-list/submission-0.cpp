class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for(int ele: nums) {
            mp[ele]++;
        }

        vector<pair<int, int>> res;

        for(auto p: mp) {
            res.push_back({p.second, p.first});
        }

        vector<int> ans;
        sort(res.begin(), res.end());

        int n = res.size();
        for(int i = n-1; i >= 0 && k > 0; i--) {
            ans.push_back(res[i].second);
            k--;
        }

        return ans;
    }
};
