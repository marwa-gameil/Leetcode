class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int>mp;
        vector<string>res;
        string temp ="";
        for(int i=0;i<s.size();i++){
            temp += s[i];
            if(temp.size()==10)
            {
                if(mp[temp]==1)
                {
                    res.push_back(temp);
                }
                mp[temp]++;

                temp =temp.substr(1,temp.size());
            }
        }
        return res;
    }
};