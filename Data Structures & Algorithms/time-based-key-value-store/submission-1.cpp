class TimeMap {
public:

    
    unordered_map<string, vector<pair<int, string>>> dic2;

    TimeMap() {

    }

    void set(string key, string value, int timestamp) {
        dic2[key].emplace_back(timestamp, value);
    }

    string get(string key, int timestamp) {
        vector<pair<int, string>> temp = dic2[key];
        int l = 0;
        int r = temp.size() - 1;

        string result = "";
        while(l <= r)
        {
            int m = (l + r) / 2;
            if(temp[m].first <= timestamp)
            {
                result = temp[m].second;
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }

        return result;



    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */