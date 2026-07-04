class Solution {
  public:
    string reverse(const string& S) {
        // code here
        string s=S;
        std::reverse(s.begin(),s.end());
        return s;
    }
};