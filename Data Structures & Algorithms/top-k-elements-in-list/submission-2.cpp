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

        vector<pair<int,int>> arr;
        for(const auto& pair: dic)
        {
            arr.push_back({pair.second, pair.first});
        }
        sort(arr.rbegin(), arr.rend());

        for(int i = 0; i < k; i++)
        {
            answer.push_back(arr[i].second);
        }
        return answer;
    }
};
