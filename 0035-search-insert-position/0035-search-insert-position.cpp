class Solution {
public:
    int searchInsert(vector<int>& arr, int tar) {  
        int n = arr.size();
        // if(tar<arr[0]) return 0;
        // if(tar>arr[n-1]) return n;
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] > tar) {
                high = mid - 1;
            }
            else if (arr[mid] < tar) {
                low = mid + 1;
            }
            else {
                return mid;
            }
        }

        return low;
    }
};