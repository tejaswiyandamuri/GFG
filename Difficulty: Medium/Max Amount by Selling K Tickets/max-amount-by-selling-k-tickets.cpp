class Solution {
  public:
    int maxAmount(vector<int>& arr, int k) {
        // code here
        long long res=0;
        int mod=1000000007;
        priority_queue<int> pq;
        for(auto x:arr)
            pq.push(x);
        while(!pq.empty()&&k>0){
            int x=pq.top();
            pq.pop();
            if(x>0)
                pq.push(x-1);
            res+=x;
            k--;
        }
        return res%mod;
    }
};