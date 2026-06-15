

class Solution {
public:
    int performOperation(int a, int b, char operation) {
        switch (operation) {
            case '+': 
                return a + b;

            case '-': 
                return a - b;

            case '*': 
                return a * b;

            case '/': {
                if (b == 0) {
                    throw runtime_error("Division by zero");
                }

                int result = abs(a) / abs(b);

                if ((a < 0) ^ (b < 0)) {
                    result = -result;
                }

                if ((a % b) != 0 && ((a < 0) ^ (b < 0))) {
                    result--;
                }

                return result;
            }
            
            case '^':
                return (int) pow(a,b);
        }
        return 0;
    }

    int evaluatePostfix(vector<string>& arr) {
        stack<int> stk;

        for (int i = 0; i < arr.size(); i++) {
            string token = arr[i];

            if (token == "+" || token == "-" || token == "*" || token == "/" || token == "^") {
                int b = stk.top();
                stk.pop();

                int a = stk.top();
                stk.pop();

                int res = performOperation(a, b, token[0]);
                stk.push(res);
            } 
            else {
                stk.push(stoi(token));
            }
        }

        return stk.top();
    }
};