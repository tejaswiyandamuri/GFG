class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        int top=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                s[++top]=s[i];
            else{
                if(top==-1)
                    return false;
                if((s[top]=='(' && s[i]==')') ||
                (s[top]=='{' && s[i]=='}') ||
                (s[top]=='[' && s[i]==']'))
                    top--;
                else
                    return false;
            }
        }
        return top==-1;
    }
};