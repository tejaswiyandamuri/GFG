class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        int l=0;
        for(int r=0;r<arr.size();r++){
            if(arr[l]!=arr[r])
                arr[++l]=arr[r];
        }
        vector<int> res(arr.begin(),arr.begin()+l+1);
        return res;
    }
};