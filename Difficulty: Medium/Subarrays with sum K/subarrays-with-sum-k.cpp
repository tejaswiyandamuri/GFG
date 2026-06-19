class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
        unordered_map<int,int> freq;
        freq[0]=1;
        int res=0,sum=0;
        for(auto n:arr){
            sum+=n;
            res+=freq[sum-k];
            freq[sum]++;
        }
        return res;
    }
};