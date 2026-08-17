class Solution {
public:
    int search(vector<int>& arr, int tar) {
        int n = arr.size();
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

        return -1;
    }
};