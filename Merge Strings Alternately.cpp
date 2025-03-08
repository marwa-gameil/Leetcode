class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;
        int low1 =0;
        int low2 =0;
        int high1 = word1.size();
       
        int high2 = word2.size();

        while(low1 < high1 || low2 < high2){

            if(low1 < high1){
                res += word1[low1++];
            }
            if(low2 < high2){
                res+= word2[low2++];
            }


        }
        return res;
    }
};