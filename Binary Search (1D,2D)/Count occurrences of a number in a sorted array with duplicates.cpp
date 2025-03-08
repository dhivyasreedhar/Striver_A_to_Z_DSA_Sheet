#TC: O(logN)
#SC: O(1)

class Solution {
    int bs(vector<int>& arr, int target,bool isleft){
        int l=0,h=arr.size()-1,mid;int cnt=0,ind=-1;
        while(l<=h){
            mid=(l+h)/2;
            if(arr[mid]==target){
                ind=mid;
                if(isleft)
                {
                    h=mid-1;
                    
                }
                else 
                l=mid+1;
            }
            else if(arr[mid]>target)
            h=mid-1;
            else
            l=mid+1;
        }
        return ind;
        
    }
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int l=bs(arr,target,true);
        int r=bs(arr,target,false);
        int cnt=r-l+1;
        if(l==-1) return 0;
        return cnt;
        
    }
};
