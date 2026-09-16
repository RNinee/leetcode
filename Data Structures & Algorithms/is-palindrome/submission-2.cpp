class Solution {
public:
    bool isPalindrome(string s) {
        int L = 0;
        int R = s.size() - 1;

        while(L < R)
        {
            cout << s[L] << ":" << s[R] << endl;
            if(isalnum(s[L]) && isalnum(s[R]))
            {
                if(tolower(s[L]) != tolower(s[R]))
                {
                    return false;
                }
                L++;
                R--;
            }
            else if(!isalnum(s[L]))
            {
                L++;
            }
            else if(!isalnum(s[R]))
            {
                R--;
            }
        }

        return true;
    }
};
