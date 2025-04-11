class Solution {
public:

    int minSwaps(string s) {
        int open =0;
        int swaps =0;   
        if(s=="[]")
        return 0;
        for (char c : s) {
            if (c == '[') {
               open++;
                
            } else {
             if(open >0){
             open--;
             }
             else{
                swaps++;
                open =1;
             }
                
            }
        }
        return swaps;
            
    }
};