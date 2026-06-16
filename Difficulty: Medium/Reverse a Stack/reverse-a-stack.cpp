class Solution {
  public:
    void reverseStack(stack<int> &st) {
        // code here
        vector<int> x;
        while(!st.empty()){
            x.push_back(st.top());
            st.pop();
        }
        st={};
        for(int i=0;i<x.size();i++)
            st.push(x[i]);
    }
};