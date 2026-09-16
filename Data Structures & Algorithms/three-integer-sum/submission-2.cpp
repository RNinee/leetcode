class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> result;
        set<int> history;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] > 0) break;
            if(history.find(nums[i]) != history.end()) continue;
            for(int j = i + 1; j < nums.size(); j++)
            {
                for(int k = j + 1; k < nums.size(); k++)
                {
                    if(nums[i] + nums[j] + nums[k] == 0)
                    {
                        result.insert({nums[i], nums[j], nums[k]});
                    }
                }
            }
            history.insert(nums[i]);
        }

        vector<vector<int>> ans;
        for(auto x:result)
        {
            ans.push_back(x);
        }

        return ans;
    }
};
