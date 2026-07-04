class Solution {
  public:
    string removeDuplicates(string& s) {
        // code here.
        string res="";
        res+=s[0];
        int r=0;
        for(int i=1;i<s.length();i++){
            if(res[r]!=s[i]){
                res+=s[i];
                r++;
            }
        }
        return res;
    }
};