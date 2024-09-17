class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> min(timePoints.size());
        for(int i = 0; i < timePoints.size(); i++) {
            int h = stoi(timePoints[i].substr(0, 2));
            int m = stoi(timePoints[i].substr(3));
            min[i] = h * 60 + m;
        }
        sort(min.begin(), min.end());
        int mini = INT_MAX;
        for(int i = 1; i < min.size(); i++) {
            mini = std::min(mini, (min[i] - min[i-1]));
        }
        mini = std::min(mini, 24 * 60 - min.back() + min.front());
        return mini;
    }
};
