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
            dic[s[r]]++;
            for(auto& pair:dic)
            {   
                if(pair.second > m)
                {
                    mc = pair.first;
                    m = pair.second;
                }
            }
            
            

            while((r - l + 1) - m > k)
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
            }
            
            maxlength  = max(r - l + 1, maxlength);
            r++;
        }

        return maxlength;
    }
};
