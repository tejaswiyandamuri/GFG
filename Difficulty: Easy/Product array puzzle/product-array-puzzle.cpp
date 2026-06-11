class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        int n=arr.size();
        long long left=1;
        vector<int> right(n),res(n);
        right[n-1]=1;
        for(int i=n-2;i>=0;i--){
            right[i]=right[i+1]*arr[i+1];
        }
        for(int i=0;i<n;i++){
            res[i]=left*right[i];
            left*=arr[i];
        }
        return res;
    }
};
