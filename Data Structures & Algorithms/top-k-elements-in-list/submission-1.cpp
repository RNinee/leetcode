class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> dic;
        vector<int> number;
        vector<int> answer;
        for(int num:nums)
        {
            dic[num]++;
        }

        for(const auto pair:dic)
        {
            number.push_back(pair.second);
        }

        sort(number.begin(), number.end(), greater<int>());

        for(int i = 0; i < k; i++)
        {
            for(const auto pair:dic)
            {
                cout << "second is " << pair.second << "\n";
                cout << "num is " << number[i] << "\n";
                if(pair.second == number[i])
                {
                    answer.push_back(pair.first);
                    dic.erase(pair.first);
                    break;
                }
                
            }
        }
        return answer;
    }
};
