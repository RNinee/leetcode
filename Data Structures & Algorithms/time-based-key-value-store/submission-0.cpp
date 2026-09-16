class TimeMap {
public:

    map<int, vector<pair<string, string>>> dic;
    vector<int> exist;

    TimeMap() {

    }

    void set(string key, string value, int timestamp) {
        if(find(exist.begin(), exist.end(), timestamp) != exist.end())
        {
            vector<pair<string, string>> & temp = dic[timestamp];
            temp.push_back({key, value});
        }
        else
        {
            vector<pair<string, string>> temp;
            temp.push_back({key, value});
            dic[timestamp] = temp;
            exist.push_back(timestamp);
        }
    }

    string get(string key, int timestamp) {
        vector<pair<string, string>> temp = dic[timestamp];
        for(auto pair: temp)
        {
            if(pair.first == key)
            {
                return pair.second;
            }
        }
        
        int max = 0;
        string s;
        for(int num: exist)
        {
            vector<pair<string, string>> t = dic[num];
            if(num > max && num <= timestamp)
            {
                for(auto pair: t)
                {
                    if(pair.first == key)
                    {
                        s = pair.second;
                    }
                }
                max = num;
            }
        }

        return s;



    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */