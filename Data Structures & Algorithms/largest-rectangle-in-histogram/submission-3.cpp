class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int largest = 0;
        vector<int> stk = heights;
        
        for(int i = 0; i < stk.size(); i++)
        {
            vector<int> past;
            for(int j = i; j < stk.size(); j++)
            {
                int current;
                if(j == i)
                {
                    current = stk[i];
                    past.push_back(stk[j]);
                }
                else
                {
                    past.push_back(stk[j]);
                    int min = *min_element(past.begin(), past.end());
                    current = (j - i + 1) * min;
                    
                }
                cout << "current is " << current << endl;
                
                if(current > largest)
                {
                    largest = current;
                }


            }
        }

        return largest;
    }
};
