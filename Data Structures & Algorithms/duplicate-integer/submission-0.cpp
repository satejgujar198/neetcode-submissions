class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map <int, int> mp;
        for(int ele: nums) {
            mp[ele]++;

            if(mp[ele] > 1) return true;
        }

        return false;
    }
};