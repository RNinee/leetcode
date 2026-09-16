class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        vector<vector<string>> result;
        for(string s: strs)
        {
            string temp = s;
            sort(temp.begin(), temp.end());
            res[temp].push_back(s);
        }

        for(const auto pair: res)
        {
            result.push_back(pair.second);
        }
        return result;
    }
};
