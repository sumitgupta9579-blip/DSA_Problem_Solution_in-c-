class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int tar) {
        vector<int> ans(2 ,-1);
        int n = arr.size();
        int low = 0, high = n - 1 ;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] > tar) {
                high = mid - 1;
            }
            else if (arr[mid] < tar) {
                low = mid + 1;
            }
            else {
                ans[0] = mid;
                high = mid - 1 ;
            }
        }

        low = 0 ;
        high = n - 1 ;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] > tar) {
                high = mid - 1;
            }
            else if (arr[mid] < tar) {
                low = mid + 1;
            }
            else {
                ans[1] = mid;
                low = mid + 1 ;
            }
        }

        return ans;
    }
};