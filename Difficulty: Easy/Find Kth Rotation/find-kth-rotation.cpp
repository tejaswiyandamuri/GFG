class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int l=0,r=arr.size()-1,mi=INT_MAX,mid=0,res=-1;
        while(l<=r){
            mid=(l+r)/2;
            if(arr[mid]<mi){
                res=mid;
                mi=arr[mid];
            }
            if(arr[l]>arr[mid])
                r=mid-1;
            else if(arr[mid]>arr[r])
                l=mid+1;
            else
                r=mid-1;
        }
        return res==-1?0:res;
    }
};
