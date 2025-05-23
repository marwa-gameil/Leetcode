class Solution {
public:
   bool isIsomorphic(string s, string t) {
    if (s.length() != t.length()) return false;

    int s_to_t[256] = {0}; 
    int t_to_s[256] = {0}; 

    for (int i = 0; i < s.length(); i++) {
        char char_s = s[i], char_t = t[i];

        if (s_to_t[char_s] && s_to_t[char_s] != char_t)
         return false;
        if (t_to_s[char_t] && t_to_s[char_t] != char_s)
         return false;

        s_to_t[char_s] = char_t;
        t_to_s[char_t] = char_s;
    }
    
    return true;
}
};
