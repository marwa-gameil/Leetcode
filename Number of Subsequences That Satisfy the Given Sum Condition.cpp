class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());

        vector<int>pow(nums.size()+1,1);
        int mod =(int)1e9 +7;
        for(int i= 1 ; i<nums.size();i++){
            pow[i] = pow[i-1]*2 %mod;
        }
        int left=0;
        int right = nums.size()-1;
        int ans =0;

        while(left <=right){
            if(nums[left]+nums[right] >target){
                right--;
            }
            else{
                ans =(ans+pow[right-left])%mod;
                left++;
            }
        }
        return ans;
    }
};