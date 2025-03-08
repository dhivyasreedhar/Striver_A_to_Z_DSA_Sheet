#TC: O(nlogn)+O(logn)
#SC: O(1)
class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        int floor=-1,ceil=-1;
        int l=0,h=arr.size()-1,mid;
        while(l<=h)
        {
            
            mid=(l+h)/2;
            if(arr[mid]==x)
            {
                return {x,x};
            }
            if(arr[mid]>x)
            {
                ceil=arr[mid];
                h=mid-1;
            }
            else if(arr[mid]<x)
            {
                floor=arr[mid];
                l=mid+1;
            }
        }
        
        return {floor,ceil};
    }
};
