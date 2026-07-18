class Solution {
  public:
    int leastWeightCapacity(vector<int>& arr, int D) {
        // code here
         long long h = 0;
        int l = 0, k = 0;
        for (auto x : arr){
            l=max(l,x);
            h += x;
        }
        while(l<=h){
            long long mid=l+(h-l)/2;
            k=1;
            long long sum=0;
            for(int i=0;i<arr.size();i++){
                if(sum+arr[i]<=mid)
                    sum+=arr[i];
                else{
                    k++;
                    sum=arr[i];
                }
            }
            if(k<=D){
                h=mid-1;
            }else
                l=mid+1;

        }
        return l;
    }
};