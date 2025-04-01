class Solution {
public:
    int mySqrt(int x) {
        int l=1,r=x,res=0;
        if(x==0 || x==1)
        return x;
        while(l<=r){
            long long mid = l+(r-l)/2;
            if(mid*mid ==x){
            return mid;
        }
        else if(mid*mid >x){
            r= mid-1;
        }
        else{
            res= mid;
            l=mid+1;
        }

        }
        return res;
    }
};