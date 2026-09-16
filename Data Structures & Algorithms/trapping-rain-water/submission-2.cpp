class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty()) return 0;
        int L = 0;
        int R = height.size() - 1;
        int res = 0;
        int left = height[L];
        int right = height[R];
        
        while(L < R)
        {
            if(height[L] < height[R])
            {
                L++;
                left = max(left, height[L]);
                res += left - height[L];
            }
            else
            {
                R--;
                right = max(right, height[R]);
                res += right - height[R];
            }
        }

        return res;
    }
};
