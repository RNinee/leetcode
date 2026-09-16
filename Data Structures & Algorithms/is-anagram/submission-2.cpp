class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> dic1;
        map<char, int> dic2;

        for(char c:s)
        {
            dic1[c]++;
        }
        for(char c:t)
        {
            dic2[c]++;
        }

        return dic1 == dic2;
    }
};
