class Solution {
public:
    int maxArea(vector<int>& heights) {
        int L = 0;
        int R = heights.size() - 1;
        int maxx = 0;
        while(L != R)
        {
            cout << min(heights[L], heights[R]) * abs(R - L) << endl;
            cout << "width " << abs(R - L) << " : height " << min(heights[L], heights[R]) << "\n";
            maxx = max(maxx, (min(heights[L], heights[R]) * abs(R - L)));
            
            if(heights[R] < heights[L])
            {
                    R = R - 1;
            }
            else
            {
                    L = L + 1;
            }
        }

        return maxx;
    }
};
