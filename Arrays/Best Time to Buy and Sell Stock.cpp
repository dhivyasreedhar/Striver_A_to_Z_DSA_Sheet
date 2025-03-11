#TC: O(N)
#SC: O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxdiff=0;int minprice=prices[0];

        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<minprice)
            minprice=prices[i];

            maxdiff=max(maxdiff,prices[i]-minprice);
        }

        return maxdiff;
        
        return maxdiff;
        
    }
};
