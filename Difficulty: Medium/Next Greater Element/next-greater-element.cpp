class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        stack<int> st;
        int n=arr.size();
        vector<int> res(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&st.top()<=arr[i])
                st.pop();
            res[i]=!st.empty()?st.top():-1;
            st.push(arr[i]);
        }
        return res;
    }
};