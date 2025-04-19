class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>>st;
        vector<int>ans(temperatures.size());
        for(int i=0; i<temperatures.size();i++){
            while(!st.empty() && temperatures[i] >st.top().second){
                int pred =st.top().first;
                ans[pred] = i-pred;
                st.pop();
            }
            st.push({i,temperatures[i]});

        }
        return ans;
    }
};