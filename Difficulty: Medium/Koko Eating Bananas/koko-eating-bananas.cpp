class Solution {
  public:
    int kokoEat(vector<int>& arr, int h) {
        // Code here
         int r=0,l=1,i=0;
        for(auto x:arr)
            r=max(x,r);
        while(l<=r){
            //i=mid
            i=l+(r-l)/2;
            int k=0;
            for(int j=0;j<arr.size();j++){
                k+=(arr[j]+i-1)/i;
                if(k>h)
                    break;
            }
            if(k<=h)
                r=i-1;
            else
                l=i+1;
        }
        return l;
    }
};