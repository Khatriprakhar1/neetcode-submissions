class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int maxpft=0;

        for(int i=0; i<prices.size(); i++){
            mini = min(mini, prices[i]);
            maxpft = max(maxpft, prices[i] - mini);
        }
        return maxpft;
    }
};
