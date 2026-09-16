#include <algorithm>

class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int r = 0;
        unordered_map<char, int> dic;
        int total = 0;
        char mc;
        int maxlength = 0;
        
        while(r < s.size())
        {
            
            cout << l << ":" << r << endl;
            int m = 0;
            total = r - l + 1;
            cout << "total " << total << endl;
            dic[s[r]]++;
            for(auto& pair:dic)
            {   
                if(pair.second > m)
                {
                    mc = pair.first;
                    m = pair.second;
                }
            }
            cout << "m " << m << ": " << mc << endl;
            
            

            while(total - m > k && l < s.size())
            {
                dic[s[l]]--;
                l++;
                for(auto& pair:dic)
                {   
                    if(pair.second > m)
                    {
                        mc = pair.first;
                        m = pair.second;
                    }
                }
                total = r - l + 1;
            }
            total = r - l + 1;
            r++;
            
            
            maxlength  = max(total, maxlength);
        }

        return maxlength;
    }
};
