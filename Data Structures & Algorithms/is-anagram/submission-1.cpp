class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> s1;
        vector<char> s2;
        for(char c:s)
        {
            s1.push_back(c);
        }
        for(char c:t)
        {
            s2.push_back(c);
        }

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        return s1 == s2;
    }
};
