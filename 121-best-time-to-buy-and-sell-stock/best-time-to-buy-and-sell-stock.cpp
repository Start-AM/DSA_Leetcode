class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minprices = prices[0];
        int maxProfit = 0;

        for (int i = 0; i < prices.size(); i++) {

            if (prices[i] < minprices) {

                minprices = prices[i];
            }
            int profit = prices[i] - minprices;

            if (profit > maxProfit) {

                maxProfit = profit;
            }
        }
        return maxProfit;
    }
};