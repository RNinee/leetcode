class Solution {
public:
    bool isPalindrome(string s) {
        string rev;
        string nor;
        for(int i = s.size() - 1; i >= 0; i--)
        {
            char c = tolower(s[i]);
            char z = tolower(s[s.size() - 1 - i]);
            if(isalnum(c))
            {
                rev += c;
            }
            if(isalnum(z))
            {
                nor += z;
            }
        }
        cout << rev;
        if(nor == rev) return true;
        return false;
    }
};
