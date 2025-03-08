#TC: log(N)
#SC: O(1)

class Solution {
  public:

    int findFloor(vector<int>& arr, int x) {
        // Your code here
        
       int l=0,h=arr.size()-1,mid,ans=-1;
       while(l<=h)
       {
           mid=(l+h)/2;
           if(arr[mid]<=x)
           {
               ans=mid;
               l=mid+1;
           }
           else
           h=mid-1;
           
       }
        
        return ans;
        
    }
};
