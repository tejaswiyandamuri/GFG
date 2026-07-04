class Solution {
  public:
    int findSum(string& s) {
        // code here
        int res=0,ans=0;
        for(auto x:s){
            if(x>=0&&x<='9')
                res=(res*10)+(x-'0');
            else {
                if(res!=0){
                    ans+=res;
                    res=0;
                }
            }
        }
        return ans+res;
    }
};