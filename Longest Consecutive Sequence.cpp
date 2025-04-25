class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int mx = 0;
        for (int num : st) { // Loop through the set, not the original nums
            if (!st.count(num - 1)) {
                int len = 1;
                while (st.count(num + len))
                    len++;
                mx = max(mx, len);
            }
        }
        return mx;
    }
};
