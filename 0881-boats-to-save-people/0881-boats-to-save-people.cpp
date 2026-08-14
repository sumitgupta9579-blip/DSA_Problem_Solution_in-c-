class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        int count = 0;

        sort(arr.begin(), arr.end());

        int i = 0;
        int j = arr.size() - 1;

        while (i <= j) {
            if (arr[i] + arr[j] <= limit) {
                i++;
                j--;
            }
            else {
                j--;
            }

            count++;
        }

        return count;
    }
};