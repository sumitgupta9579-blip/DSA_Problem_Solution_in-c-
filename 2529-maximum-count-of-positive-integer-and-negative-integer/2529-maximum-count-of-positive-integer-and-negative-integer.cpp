class Solution {
public:
    int maximumCount(vector<int>& arr) {
        int n = arr.size();

        // Find first positive number
        int low = 0, high = n - 1;
        int firstPositive = n;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] > 0) {
                firstPositive = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        int pos = n - firstPositive;

        // Find first non-negative number
        low = 0;
        high = n - 1;
        int firstNonNegative = n;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] >= 0) {
                firstNonNegative = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        int neg = firstNonNegative;

        return max(pos, neg);
    }
};