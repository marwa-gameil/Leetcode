class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mp;
        for(int i=0;i<strs.size();i++){
            string x = strs[i];
            sort(x.begin(),x.end());
            mp[x].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for(auto it :mp){
            res.push_back(it.second);
        }
        return res;
    }
};
