class Solution {
  public:
    vector<int> constructList(vector<vector<int>> &queries) {
        // code here
        vector<int> res;
        res.push_back(0);
        int xr=0;
        for(auto x:queries){
            if(x[0]==0)
                res.push_back(x[1]^xr);
            else{
                xr^=x[1];
            }
        }
        for(int i=0;i<res.size();i++)
             res[i]=res[i]^xr;
        sort(res.begin(),res.end());
        return res;
    }
};
