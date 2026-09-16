class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> stk;
        vector<double> ans;
        int answer = 0;
        
        for(int i = 0; i < position.size(); i++)
        {
            stk.push_back({position[i], speed[i]});
        }

        sort(stk.rbegin(), stk.rend());
        for(int i = 0; i < stk.size(); i++)
        {  
            double time = (double)(target - stk[i].first) / stk[i].second;
            if(ans.empty() || time > ans.back())
            {
                ans.push_back(time);
            }   
        }

        return ans.size();
    }
};
