class Solution {
public
static bool compare(string &a , string &b){
    return a+b  b+a ;
}
    string largestNumber(vectorint& nums) {
        vectorstring strNums;

        for(int num  nums){
            strNums.push_back(to_string(num));
        }

        sort(strNums.begin(),strNums.end(),compare);
        if(strNums[0] == 0){
            return 0;
        }
        string res = ;
        for(string s strNums){
            res += s;

        }

        return res;
    }
};