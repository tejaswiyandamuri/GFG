class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int res=0,l=0;
        unordered_map<char,int> freq;
        for(int r=0;r<s.size();r++){
            freq[s[r]]++;
            while(freq.size()>k){
                freq[s[l]]--;
                if(freq[s[l]]==0)
                    freq.erase(s[l]);
                l++;
            }
            if(freq.size()==k)
                res=max(res,r-l+1);
        }
        return res==0?-1:res;
    }
};