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
            
            
            
            total = r - l + 1;
            while(total - m > k)
            {
                dic[s[l]]--;
                l++;
                total = r - l + 1;
            }
            total = r - l + 1;
            
            
            
            maxlength  = max(total, maxlength);
            r++;
        }

        return maxlength;
    }
};
