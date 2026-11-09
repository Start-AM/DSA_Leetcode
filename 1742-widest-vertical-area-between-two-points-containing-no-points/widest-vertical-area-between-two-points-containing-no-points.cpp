class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> x;
        int maxDiff = 0;
        int diff;
        for (int i = 0; i < points.size(); i++) {
            x.push_back(points[i][0]);
        }
        sort(x.begin(), x.end());
        for (int i = 0; i < x.size() - 1; i++) {
            diff = x[i + 1] - x[i];
            maxDiff = max(maxDiff, diff);
        }
        return maxDiff;
    }
};