class Solution {
  public:
    int smallestSubstring(string s) {
        // code here
        int n = s.size();
        int l=0,ans=INT_MAX;
        int count[3]={0};
        for(int r=0;r<n;r++){
            count[s[r]-'0']++;
            while(count[0]>0 && count[1]>0 && count[2]>0){
                ans = min(ans,r-l+1);
                count[s[l++]-'0']--;
            }
        }
        return (ans==INT_MAX)?-1:ans;
    }
};
