class Solution {
public
    vectorint findAnagrams(string s, string p) {
        int s_len = s.length();
        int p_len = p.length();
        
        if(s.size()  p.size())
        return {};

        vectorintvp(26,0);
        vectorintvs(26,0);
        vectorintans;
        for(int i=0;ip_len;i++){
            vp[p[i]-'a']++;

        }
        int start =0;
        for(int i=0;is_len;i++){
            vs[s[i]-'a']++;
            if(i=p.size()){
                vs[s[start]-'a']--;
                start++;
            }
            if(vp==vs){
                ans.push_back(start);
            }

        }
        return ans;
    }
};