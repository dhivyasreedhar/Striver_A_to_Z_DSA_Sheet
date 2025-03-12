#TC: O(N)
#SC: O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxisum=INT_MIN;
        int sum=0;
        for(auto it:nums){
            sum+=it;
            if(sum>maxisum)
            maxisum=sum;

            if(sum<0)
            sum=0;
        }
        return maxisum;
        
    }
};
