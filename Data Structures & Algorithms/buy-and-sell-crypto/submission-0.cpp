class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int r = 1;
        int ans = 0;

        while(r < prices.size())
        {
            cout << l << " : " << r << endl;
            if(l == r)
            {
                r++;
                continue;
            }
            
            
            if(prices[l] >= prices[r])
            {
                l = r;
            }
            else if(prices[l] < prices[r])
            {
                cout << "profit " << prices[r] - prices[l]  << endl;
                ans = max(ans, prices[r] - prices[l]);
                r++;
            }
        }

        return ans;
    }
};
