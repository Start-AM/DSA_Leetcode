class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {

        sort(arr.begin(), arr.end());
        int minDiff = INT_MAX;

        for (int i = 0; i < arr.size() - 1; i++) {
            int diff = arr[i + 1] - arr[i];
            minDiff = min(minDiff, diff);
        }
       
        vector<vector<int>> ans;

        for (int i = 0; i < arr.size() - 1; i++) {
            if (minDiff == (arr[i + 1] - arr[i])) {
                ans.push_back({arr[i], arr[i + 1]});
            }
        }
        return ans;
    }
};