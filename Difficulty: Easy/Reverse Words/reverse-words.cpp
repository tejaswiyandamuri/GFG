class Solution {
	public:
	string reverseWords(string &s) {
		// code here
		string res = "", word = "";
	 // Traverse from end to start
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != '.') {
                word += s[i]; // build word in reverse
            } else {
                if (!word.empty()) {
                    reverse(word.begin(), word.end()); // fix word order
                    if (!res.empty()) res += '.';
                    res += word;
                    word.clear();
                }
            }
        }
        
        // Add the last word if exists
        if (!word.empty()) {
            reverse(word.begin(), word.end());
            if (!res.empty()) res += '.';
            res += word;
        }
        
        return res;
	}
};
