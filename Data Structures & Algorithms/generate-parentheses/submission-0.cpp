class Solution {
public: 

    vector<string> vec;

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

    void cal(string s, int idx, int n){
        if(idx < n*2){
            cal(s+'(',idx+1,n);
            cal(s+')',idx+1,n);
        }
        if(idx == n*2){
            cout << s << endl;
            if(isValid(s))
            {
                vec.push_back(s);
            }
            return;
        }
        return;
    }
    vector<string> generateParenthesis(int n) {
        string s;
        cal(s, 0, n);
        return vec;
    }
};
