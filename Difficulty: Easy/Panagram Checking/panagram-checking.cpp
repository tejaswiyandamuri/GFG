class Solution {
  public:
    bool checkPangram(string& s) {
        //  code here
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++){
            char x=s[i];
            if((x>=97&&x<=122)||(x>=65&&x<=90)){
                x=tolower(x);
                mp[x]++;
            }
        }
        return mp.size()==26;
    }
};