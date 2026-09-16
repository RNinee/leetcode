class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int which = 0;
        for(int i = 0; i < matrix.size(); i++)
        {
            if(i == matrix.size() - 1)
            {
                if(matrix[i][0] == target)
                {
                    return true;
                }
                which = i;
                break;
            }

            cout << "matrix " << matrix[i][0] << ":" <<  matrix[i + 1][0] << endl;
            if(target >= matrix[i][0] && target < matrix[i + 1][0])
            {
                which = i;
                break;
            }
        }

        cout << which;

        vector<int> nums = matrix[which];
        int L = 0;
        int R = nums.size() - 1;

        while(L <= R)
        {
            int m = L + ((R - L) / 2);
            if(nums[m] > target)
            {
                R = m - 1;
            }
            else if(nums[m] < target)
            {
                L = m + 1;
            }
            else
            {
                return true;
            }
        }

        return false;
        
    }
};
