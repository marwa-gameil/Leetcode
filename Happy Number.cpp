class Solution {
public:
    int get_next(int n){
         int sum =0;
         while(n>0){
            int digit = n%10;
            sum += digit*digit;
            n /=10;
         }
         return sum;
    }


    bool isHappy(int n) {
      int slow =n,fast =get_next(n);
            while (fast != 1 && slow != fast) {
                slow = get_next(slow);
                fast = get_next(get_next(fast));
              }
    return fast ==1;
    }
};