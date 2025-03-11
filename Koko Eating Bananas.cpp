class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low =1;
        long long high =1e9 +1;

       while(low<high){
        int mid =(high + low) /2 ;
        int totalperhour = 0;
        for(int i=0;i<piles.size();i++){
            totalperhour += ceil((double)piles[i]/mid);
        }

           if(totalperhour > h){
                low = mid+1;
            }
            else{
                high = mid;
            }
       }
        return high ;
       
    }
};