class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
       int l = 0, r = arr.size() - 1;
        int ans = -1; // Default: floor doesn't exist

        while (l <= r) {
            int mid = l + (r - l) / 2; // Prevent overflow

            if (arr[mid] <= x) {
                ans = mid;   // Possible floor found
                l = mid + 1; // Search right for a larger floor
            } else {
                r = mid - 1; // Search left
            }
        }
        return ans; 
    }
};
