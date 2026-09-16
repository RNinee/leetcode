class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> result;
        set<int> history;
        for(int i = 0; i < nums.size() - 2; i++)
        {
            if(nums[i] > 0) break;
            if(!history.count(nums[i]))
            {
                int L = i + 1;
                int R = nums.size() - 1;
                int target = -1 * nums[i];
                while(L != R)
                {
                    if(nums[L] + nums[R] == target)
                    {
                        result.insert({nums[i], nums[L], nums[R]});
                        L = L + 1;
                    }
                    else if(nums[L] + nums[R] > target)
                    {
                        R = R - 1;
                    }  
                    else if(nums[L] + nums[R] < target) 
                    {
                        L = L + 1;
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
