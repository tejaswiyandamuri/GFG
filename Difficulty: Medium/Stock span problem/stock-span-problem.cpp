class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        stack<int> st; // Stack to store indices
        vector<int> res(arr.size());
        
        for (int i = 0; i < arr.size(); ++i) {
            // Pop while the current price is higher than price at st.top()
            while (!st.empty() && arr[st.top()] <= arr[i]) {
                st.pop();
            }
            
            // Span is difference between current index and index of last higher price
            res[i] = st.empty() ? (i + 1) : (i - st.top());
            
            st.push(i); // Push current index
        }
        
        return res;
    }
};
