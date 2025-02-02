class Solution {
public:
    bool validPalindrome(string s) {
        int left =0;
        int right = s.length() -1;
        while(left<=right){
            if(s[left] != s[right]){
                 return IsPalindrome(s, left + 1, right) || IsPalindrome(s, left, right - 1);
            }
            left++;
            right--;
        }
        return true;
    }
 bool IsPalindrome(string s, int left, int right)
    {
        while (left < right)
        {
            if (s[left] != s[right]) 
            return false;
            left++;
            right--;
        }
        return true;
    }
};