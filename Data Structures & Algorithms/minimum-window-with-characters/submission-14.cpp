class Solution {
public:
    string minWindow(string s, string t) {
        if(s == t) {
            return s;
        }

        if(s.size() < t.size()){
            return "";
        }

        int p1 = 0;
        int p2 = 0;
        tuple<int,int, int> answer = {p1, p2, INT_MAX};

        map<char, int> mp;
        map<char, int> current;
        int count = 0;

        for(char c : t) {
            mp[c]++;
        }
        
        int round = 0;
        int flag = 0;

        while(p2 < s.length()){

            current[s[p2]]++;

            count = 0;
            for(auto [key, value] : mp){
                if(current[key] >= value){
                    count++;
                }
            }
           


            while(count == mp.size()){

                if(get<2>(answer) > (p2 - p1 + 1))
                {
                    answer = {p1, p2, p2 - p1 + 1}; 
                } 
                

               
                if (current[s[p1]] > 0) {
                    current[s[p1]]--;
                } else {
                    current[s[p1]] = 0;
                }
                
                p1++;

                count = 0;
                for(auto [key, value] : mp){

                   

                    if(current[key] >= value){
                        count++;
                    }
                }
            }

            p2++;
        



        }

        if (get<2>(answer) == INT_MAX) {
            return "";
        }

        string a = "";
        for(int i = get<0>(answer); i <= get<1>(answer) ; i++){
            a.push_back(s[i]);
        }


        return a;
    }
};
