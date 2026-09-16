class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> answer;
        for(int i = 0; i < temperatures.size(); i++)
        {
            bool found = false;
            for(int j = i + 1; j < temperatures.size(); j++)
            {
                if(temperatures[i] < temperatures[j])
                {
                    answer.push_back(j - i);
                    found = true;
                    break;
                }
            }

            if(!found)
            {
                answer.push_back(0);
            }
        }
        
        
        return answer;
    }
};
