class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
       
        vector<pair<int, int>> cars;
        int n = position.size();

        for (int i = 0; i < n; ++i) {
            cars.push_back({position[i], speed[i]});
        }

        // Sort by position descending
        sort(cars.rbegin(), cars.rend());

        stack<double> fleets;

        for (auto& car : cars) {
            double time = (double)(target - car.first) / car.second;
            if (fleets.empty() || time > fleets.top()) {
                fleets.push(time);  // new fleet
            }
            // else: car joins the fleet ahead (do nothing)
        }

        return fleets.size();
    
    }
};
