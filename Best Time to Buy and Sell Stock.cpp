class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
            int l = 0;
            int r = 1;
            int maxx=0;
        while (r < prices.size()){
            if(prices[l]<prices[r]){
                maxx =max(maxx,prices[r]-prices[l]);
            }
            else{
                l=r;

            }
            r++;

        }
        return maxx;
    }
};
