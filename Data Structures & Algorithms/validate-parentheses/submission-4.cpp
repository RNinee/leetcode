class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.size() % 2 == 1)
        {
            return false;
        }
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.size() == 0)
                {
                    return false;
                }

                if(st.top() == '{' && s[i] != '}')
                {
                    
                    return false;
                }
                if(st.top() == '[' && s[i] != ']')
                {
                    return false;
                }
                if(st.top() == '(' && s[i] != ')')
                {
                    return false;
                }
                st.pop();
            }
        }

        if(st.size() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};
