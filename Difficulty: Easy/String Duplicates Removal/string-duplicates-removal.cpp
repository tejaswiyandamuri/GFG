class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        unordered_map<char,int> mp;
        string res="";
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]==0)
                res+=s[i];
            mp[s[i]]++;
        }
        return res;
    }
};