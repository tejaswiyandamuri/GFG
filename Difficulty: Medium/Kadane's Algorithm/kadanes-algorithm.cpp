
class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Your code here
        int cur_sum=0,max_sum=arr[0],n=arr.size();
        for(auto i: arr){
            cur_sum=max(i,cur_sum+=i);
            max_sum=max(cur_sum,max_sum);
            // if(cur_sum<0)
            //     cur_sum=0;
        }
        return max_sum;
    }
};