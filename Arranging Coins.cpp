class Solution {
public:
    int arrangeCoins(int n) {
        int c=0;
        int i =1;

        while(true){
            n -=i;
            if(n<0){
                break;
            }
            else{
                i++;
                c++;
            }

        }
        return c;
    }
};