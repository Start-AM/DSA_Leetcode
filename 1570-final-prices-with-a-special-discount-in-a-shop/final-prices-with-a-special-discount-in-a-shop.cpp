class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int i = 0;
        vector<int> ans;
        while (i < prices.size()) {
            for (int j = i + 1; j < prices.size(); j++) {
                if (prices[j] <= prices[i]) {
                    prices[i] = prices[i] - prices[j];
                    break;
                }
            }
            ans.push_back(prices[i]);
            i++;
        }
        return ans;
    }
};