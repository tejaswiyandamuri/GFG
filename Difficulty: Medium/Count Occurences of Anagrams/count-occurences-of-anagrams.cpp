// User function template for C++
class Solution {
  public:
    int search(string &pat, string &txt) { 
        int l=0,res=0;
        unordered_map<int,int> pfreq,tfreq;
        for(auto ch:pat)
            pfreq[ch]++;
        for(int r=0;r<txt.size();r++){
            tfreq[txt[r]]++;
            if(r<pat.size()-1) continue;
            bool isAnagram=true;
            for(auto ch:pat){
                if(tfreq[ch]!=pfreq[ch]){
                    isAnagram=false;
                    break;
                }
            }
            if(isAnagram)
                res++;
            tfreq[txt[l++]]--;
            if(tfreq[txt[l]]<=0) 
                tfreq.erase(tfreq[txt[l]]);
        }
        return res;
    }
};