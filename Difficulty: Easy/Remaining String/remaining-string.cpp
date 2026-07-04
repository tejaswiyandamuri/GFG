class Solution {
  public:
    string printString(string s, char ch, int count) {
        // code here
        std::unordered_map<char, int> mp;

        for (size_t i = 0; i < s.length(); i++) {
            mp[s[i]]++;
            if (mp[ch] == count) {
                // Return substring after this position
                if (i + 1 < s.length()) {
                    return s.substr(i + 1);
                } else {
                    return ""; // No characters after
                }
            }
        }
        return ""; // 
    }
};