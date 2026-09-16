class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        if(strs.size() == 0)
        {
            return s;
        }

        for(int i = 0; i < strs.size(); i++)
        {
            s += strs[i];
            s.push_back('\n');
        }
        
        
        return s;
    }

    vector<string> decode(string s) {
        if(s.size() == 0)
        {
            return {};
        }
        string temp;
        vector<string> ans;
        for(int i = 0; i < s.size(); i++)
        {
            
            if(s[i] != '\n')
            {
                temp.push_back(s[i]);
                cout << "pushing " << s[i] << "\n"; 
            }
            else
            {
                ans.push_back(temp);
                temp.clear();
            }
        }

       
        return ans;
    }
};
