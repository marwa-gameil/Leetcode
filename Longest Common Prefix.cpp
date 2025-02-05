class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

  
        sort(strs.begin(), strs.end());

        string first = strs[0];
        string last = strs[strs.size() - 1];
        int prefixLength = 0;

    
        for (int i = 0; i < first.size() && i < last.size(); ++i) {
            if (first[i] == last[i]) {
                ++prefixLength;
            } else {
                break; 
            }
        }

        return first.substr(0, prefixLength);
    }
};
