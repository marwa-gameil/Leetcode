class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int i = 0; i < asteroids.size(); i++) {
            int curr = asteroids[i];
            bool destroyed = false;

            while(!st.empty() && curr < 0 && st.top() > 0) {
                if(abs(curr) > st.top()) {
                    st.pop();  // The positive asteroid is destroyed
                } else if(abs(curr) == st.top()) {
                    st.pop();  // Both are destroyed
                    destroyed = true;
                    break;
                } else {
                    destroyed = true;  // The negative asteroid is destroyed
                    break;
                }
            }

            if(!destroyed)
                st.push(curr);
        }

        vector<int> ans(st.size());
        for(int i = st.size() - 1; i >= 0; i--) {
            ans[i] = st.top();
            st.pop();
        }

        return ans;
    }
};
