#TC: 0(2Log)=O(LogN)
#SC: O(1)
class Solution {
public:
int bs(vector<int>& nums, int target,bool isleft){
            int ind=-1;
        int l=0,h=nums.size()-1,mid;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(nums[mid]<target)
            {
                l=mid+1;
               
            }
            else if(nums[mid]>target)
            {
                h=mid-1;
            }
            else
        {ind=mid;
        if(isleft)
         h=mid-1;
         else 
         l=mid+1;

        }
       
        }
        return ind;}
    vector<int> searchRange(vector<int>& nums, int target) {
        

        int left=bs(nums,target,true);
        int right=bs(nums,target,false);

        return {left,right};
        
    }
};
