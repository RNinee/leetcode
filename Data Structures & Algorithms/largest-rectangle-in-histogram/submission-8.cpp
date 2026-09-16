class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<pair<int,int>> stk;
        int max_size = 0;

        for(int i = 0; i < heights.size(); i++)
        {
            int h = heights[i];
            int push = 0;
            int min_push = INT_MAX;
            while(!stk.empty() && stk.back().first > h)
            {
                int he = stk.back().first;
                int ind = stk.back().second;
                stk.pop_back();
                max_size = max(max_size, he * (i - ind));
                cout << max_size << "\n";
                push = 1;
                min_push = min(min_push, ind);
            }
            if(push)
            {
                stk.push_back({h, min_push});
            }
      
            stk.push_back({h, i});
            
           
        }  

        for(int i = 0; i < stk.size(); i++)
        {
            int he = stk[i].first;
            int ind = stk[i].second;
            if(ind != stk.back().second)
            {
                max_size = max(max_size, he * (int)(heights.size() - ind));
            }
            else
            {
                max_size = max(max_size, he);
            }
        }


        return max_size;
    }
};
