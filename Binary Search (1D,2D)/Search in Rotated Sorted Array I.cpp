#TC: O(logN)
#SC: O(1)

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1,mid;
        int k=target;
        while(l<=h){
            mid=(l+h)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[l]<=nums[mid]){
                if(nums[l]<=k&&k<=nums[mid])
                h=mid-1;
                else
                l=mid+1;
            }
            else if(nums[h]>=nums[mid])
            {
                if(nums[mid]<=k&&k<=nums[h])
                l=mid+1;
                else
                h=mid-1;
            }
        }
        return -1;
        
    }
};
