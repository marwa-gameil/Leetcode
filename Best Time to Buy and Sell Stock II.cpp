class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
            int maxx=0;
       for(int i= 1 ; i< prices.size();i++){
            if(prices[i]> prices[i-1]){
                maxx+= prices[i] -prices[i-1];
            }
       }
            
        return maxx;
    }
};
