class Solution {
public:
    void sortColors(vector<int>& nums) {
       int start=0;
      int end =nums.size()-1;
        for(int i=0;i<=end;i++){
         if(nums[i]==0){
            swap(nums[i],nums[start]);
           start++;
         }
        else if(nums[i]==2){
            swap(nums[i],nums[end]);
            i--;
            end--;
           
         }
        

       
       }
   
    }
};
