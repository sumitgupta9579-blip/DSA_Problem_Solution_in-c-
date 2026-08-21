class Solution {
public:
    bool notvalidate(char ch){
            if(ch>=65 and ch<=90) return false;
            else if(ch>=97 and ch<=122) return false;
            else if (ch>=48 and ch<=57) return false;
            else return true;
        }
    bool isPalindrome(string s) {
        // int i = 0;
        // int j = s.length() - 1;

        // while (i < j) {

        //     // Skip non-alphanumeric characters from left
        //     if (!isalnum(s[i])) {
        //         i++;
        //         continue;
        //     }

        //     // Skip non-alphanumeric characters from right
        //     if (!isalnum(s[j])) {
        //         j--;
        //         continue;
        //     }

        //     // Compare after converting to lowercase
        //     if (tolower(s[i]) != tolower(s[j])) {
        //         return false;
        //     }

        //     i++;
            // j--;
        // }

        // return true;

        

        int n=s.length();
        int i=0,j=n-1;
        while(i<j){
            char x =s[i] , y=s[j];
            if(x>=65 && x<=90) x += 32;
            if(y>=65 && y<=90) y += 32;
            if(notvalidate(x)) i++;
            else if (notvalidate(y)) j--;
            else{
                if(x!=y) return false;
                i++;
                j--;
            }
            
        }
        return true;
    }
};