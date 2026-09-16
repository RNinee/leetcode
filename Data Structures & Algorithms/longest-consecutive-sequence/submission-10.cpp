class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.empty()) return 0;
        if(nums.size() == 1)
        {
            return 1;
        }

        int current = 0;
        int max = 0;
        
        vector<int> temp = nums;
        sort(temp.begin(), temp.end());
        int size = temp.size();
        for(int nums: temp)
        {
            cout << nums << " ";
        }
        cout << "\n";
        for(int i = 0; i < size; i++)
        {
            if(i == 0)
            {
                current++;
                continue;
            }
            else
            {
                if(abs(temp[i] - temp[i - 1]) == 1)
                {
                    current++;
                }
                else
                {
                    if(abs(temp[i] - temp[i - 1]) <= 1)
                    {
                        if(current > max)
                        {
                            max = current;
                        }
                        continue;
                    }
                    else
                    {
                        current = 1;
                    }
                    
                }

                if(current > max)
                {
                    max = current;
                }
            }

            
            cout << current << " ";
        }

        return max;
    }
};
