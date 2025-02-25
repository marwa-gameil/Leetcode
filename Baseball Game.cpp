class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>myStack;
        for(int i =0; i< operations.size() ; i++ ){
            if(operations[i] == "+"){
                int value1 = myStack.top();
                myStack.pop();
                int value2 = myStack.top();
                myStack.push(value1);
                int sum = value1 + value2;
                myStack.push(sum);
            }
            else if(operations[i] == "D"){
                int val = myStack.top();
                int newval = val *2;
                myStack.push(newval);

            }
              else if(operations[i] == "C"){
                myStack.pop();
            }
            else{
                myStack.push(stoi(operations[i]));
            }
        }
        int finalsum=0;
        while(!myStack.empty()){
            finalsum += myStack.top();
            myStack.pop();
        }
        return finalsum;
    }
};