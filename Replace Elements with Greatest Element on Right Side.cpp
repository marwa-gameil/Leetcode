class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        int n =arr.size() ;
        int mr =-1;

        for (int i = n - 1; i >= 0; --i) {
            int current = arr[i];   
            arr[i] = mr;  
           mr = max(mr, current);
        
        }
return arr ;
    }
};