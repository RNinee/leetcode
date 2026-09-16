class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0)
        {
            return 0;
        }
        int l = 0;
        int r = 0;
        int m = 1;

        set<char> se;
        se.insert(s[l]);
        int current = 1;
        
        while(r + 1 < s.size())
        {
            r++;
            cout << l << ":" << r ;
            
            if(se.find(s[r]) != se.end())
            {
                cout << " found ";
                while(s[l] != s[r])
                {
                    se.erase(s[l]);
                    l++;
                }
                se.erase(s[l]);
                l++;
            }   

            se.insert(s[r]);
            current = r - l + 1;
            m = max(current, m);
            cout  << "   " << current << endl;
            
        }

        return m;
        
    }
};
