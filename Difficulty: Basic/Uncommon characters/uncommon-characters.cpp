class Solution {
  public:
    string uncommonChars(string& s1, string& s2) {
        // code here
        string res="";
        unordered_map<char,int> mp,r;
        for(auto x:s1)
            mp[x]++;
        for(auto x:s2){
            if(mp[x]==0){
                if(r[x]==0)
                     res+=x;
                r[x]++;
            }
        }
        mp.clear();
         for(auto x:s2)
            mp[x]++;
        for(auto x:s1){
            if(mp[x]==0&&r[x]==0)
                res+=x;
                r[x]++;
        }
        sort(res.begin(),res.end());
        return res;
    }
};
