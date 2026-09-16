class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for(int i = 0; i < tokens.size(); i++)
        {
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
            {
                int first = stk.top();
                stk.pop();
                int second = stk.top();
                stk.pop();
                if(tokens[i] == "+")
                {
                    stk.push(first + second);
                }
                else if(tokens[i] == "-")
                {
                    stk.push(second - first);
                }
                else if(tokens[i] == "*")
                {
                    stk.push(second * first);
                }
                else if(tokens[i] == "/")
                {
                    stk.push(second / first);
                }
                
            }
            else
            {
                stk.push(stoi(tokens[i]));
            }
        }

        return stk.top();
    }
};
