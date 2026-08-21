class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;

        while (i < j) {

            // Skip non-alphanumeric characters from left
            if (!isalnum(s[i])) {
                i++;
                continue;
            }

            // Skip non-alphanumeric characters from right
            if (!isalnum(s[j])) {
                j--;
                continue;
            }

            // Compare after converting to lowercase
            if (tolower(s[i]) != tolower(s[j])) {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};