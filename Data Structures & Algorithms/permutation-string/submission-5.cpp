class Solution {
public:
    void initializes1(unordered_map<char, int>& dic, string s)
    {
        for(char c: s)
        {
            dic[c]++;
        }
    }

    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> dic1;
        unordered_map<char, int> dic2;
        initializes1(dic1, s1);
        int l = 0;
        int len = s1.size();
        int r = len - 1;
        for(int i = 0; i < len; i++)
        {
            dic2[s2[i]]++;
        }

        while(r < s2.size())
        {
            cout << l  << " : " << r << endl; 
            int found = 0;
            for(auto& pair:dic1)
            {
                cout << pair.first << ":" << pair.second;
                cout << " | " << dic2[pair.first] << endl;
                if(dic2[pair.first] == pair.second)
                {
                    found++;
                }
            }

            if(found == dic1.size())
            {
                return true;
            }
            dic2[s2[l]]--;
            r++;
            l++;
            if(r < s2.size())
            {
                dic2[s2[r]]++;
            }
            
        }

        return false;
    }
};
