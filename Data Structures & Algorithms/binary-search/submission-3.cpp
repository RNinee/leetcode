class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        while (l <= r) {
            int k = (l + r) / 2;

            
            if (nums[k] > target) {
                r = k - 1;
            } 
            else if(nums[k] < target) {
                l = k + 1;
            }
            else if(nums[k] == target)
            {
                return k;
            }
        }
        return -1;
    }
};
