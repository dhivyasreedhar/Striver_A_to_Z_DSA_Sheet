#TC: O(N logN)+ O(N)
#SC:O(N)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        mp[nums[i]]++;

        int n=nums.size();
        for(auto it:mp)
        if(it.second>n/2)
        return it.first;

        return -1;
    }
};
