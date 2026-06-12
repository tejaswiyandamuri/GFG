class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int max_far=arr[0],min_far=arr[0];
        int ans=arr[0];
        for(int i=1;i<arr.size();i++){
            int prev_max=max_far;
            max_far=max(arr[i],max(prev_max*arr[i],arr[i]*min_far));
            min_far=min(arr[i],min(arr[i]*min_far,arr[i]*prev_max));
            ans=max(ans,max_far);
        }
        return  ans;
    }
};