class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int index =1;
        for(int i =1 ; i<nums.size();i++){
            if(nums[i] != nums[i-1]){
            nums[index] = nums[i];
            index++;
            }
        }
        return index;
    }
};