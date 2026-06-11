class Solution {
  public:
    int findIndex(string &s) {
        // code here
        int n=s.length(),opening=0;
        vector<int> closing(n+1,0);
        for(int i=n-1;i>=0;i--){
            closing[i]=closing[i+1];
            if(s[i]==')')
                closing[i]=closing[i+1]+1;
        }
        for(int i=0;i<=n;i++){
            if(opening==closing[i])
                return i;
            if(i<n&&s[i]=='('){
                opening++;
            }
        }
        return 0;
    }
};