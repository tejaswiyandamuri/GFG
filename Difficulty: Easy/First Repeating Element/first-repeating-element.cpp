class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        unordered_map<int, int> freq;

        // Count frequencies of all elements
        for (int num : arr) {
            freq[num]++;
        }

        // Find the first element with freq > 1
        for (int i = 0; i < arr.size(); i++) {
            if (freq[arr[i]] > 1)
                return i + 1; // 1-based index
        }

        return -1;
    }
};
