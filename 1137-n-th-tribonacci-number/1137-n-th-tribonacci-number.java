// class Solution {
//     static int [] dp;
//     public int tri(int n){
//         if(n==0) return 0;
//         if(n==1 || n==2) return 1;
//         if(dp[n]!=-1) return dp[n];
//         return dp[n] = tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
//     }
//     public int tribonacci(int n) {
       
//         dp = new int[ n+1];
//         Arrays.fill(dp ,-1);
//         return tri(n);
//     }
// }

class Solution {

    public int tribonacci(int n) {
        int[] dp = new int[n + 1];
        java.util.Arrays.fill(dp, -1);
        return helper(n, dp);
    }

    public int helper(int n, int[] dp) {
        if (n == 0) return 0;
        if (n == 1 || n == 2) return 1;

        if (dp[n] != -1) return dp[n];

        dp[n] = helper(n - 1, dp)
              + helper(n - 2, dp)
              + helper(n - 3, dp);

        return dp[n];
    }
}