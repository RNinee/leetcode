class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int max_pile = *max_element(piles.begin(), piles.end());
        int res = max_pile;

        int L = 1;
        int R = max_pile;
        while(L <= R)
        {
            int m = (L + R) / 2;
            cout << "m = " << m << ":" << m << endl;
    
            long long hr = 0;
            for(int num:piles)
            {
                int temp = static_cast<int>(ceil(static_cast<double>(num) / m));
                cout << "temp: " << temp << endl;
                hr += temp;
            }
            cout << "hr: " << hr << "\n";

            
            if(hr <= h)
            {
                R = m - 1;
                res = m;
            } 
            else 
            {
                L = m + 1;
            }
        
        }

        return res;
    }
};
