class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        int n = arr.size();
        vector<int> res(n, 0);

        stack <int> st;

        for(int i = n-1; i >= 0; i--) {

            while(!st.empty() && arr[i] >= arr[st.top()]) {
                st.pop();
            }

            if(!st.empty()) {
                res[i] = st.top() - i;
            }

            st.push(i);
        }

        return res;
    }
};
