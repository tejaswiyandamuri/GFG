class Solution {
  public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        // code here..
        vector<int> x;
        int middle=floor(s.size())/2;
        for(int i=0;i<middle;i++){
            if(i!=middle){
                x.push_back(s.top());
                s.pop();
            }
        }
        s.pop();
        for(int i=x.size()-1;i>=0;i--)
            s.push(x[i]);
    }
};