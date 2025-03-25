class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findFirst(nums, target);
        int last = findLast(nums, target);
        return {first, last};
    }

private:
    int findFirst(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int firstIndex = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                firstIndex = mid;  
                high = mid - 1;     
            } 
            else if (nums[mid] > target) {
                high = mid - 1;
            } 
            else {
                low = mid + 1;
            }
        }

        return firstIndex;
    }

    int findLast(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int lastIndex = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                lastIndex = mid; 
                low = mid + 1;    
            } 
            else if (nums[mid] > target) {
                high = mid - 1;
            } 
            else {
                low = mid + 1;
            }
        }

        return lastIndex;
    }
};