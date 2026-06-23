class Solution {
  public:
    int maxPeopleDefeated(int p) {
        // Code Here
        int i;
        for( i=1;i*i<=p;i++){
            p-=(i*i);
        }
        return i-1;
    }
};
