class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;

        int vote = 0;

        for(int num : nums) {

            if(vote == 0) {
                candidate = num;
            }

            if(num == candidate) vote++;
            else vote--;
        }

        return candidate;
    }
};