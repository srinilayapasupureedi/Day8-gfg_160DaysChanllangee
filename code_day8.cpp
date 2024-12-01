    int maximumProfit(vector<int> &prices) {
        // code here
        int minCP=prices[0];
        int maxProfit=0;
        for(int i=1;i<prices.size();i++)
        {
            //we are selling at day1.intially buys at day 0
            //p=sp-cp
            int currProfit=prices[i]-minCP;
            maxProfit=max(currProfit,maxProfit);
            //lets update cp which we are lookingfor min..
            minCP=min(prices[i],minCP);
        }
        return maxProfit;
    }
