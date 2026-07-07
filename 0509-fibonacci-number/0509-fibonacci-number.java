class Solution {
    // static int[] dp;
    // public int fibo(int n) {
    //     if(n<=1) return n;
    //     if(dp[n]!=0) return dp[n];
    //     int ans =fibo(n-1)+fibo(n-2);
    //     dp[n]=ans;
    //     return ans;
    // }
    public int fib(int n) {
    //     dp=new int[n+1];
    //    return fibo(n);
        if(n<=1) return n;
        int [] dp= new int[3];
        dp[0]=0;dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[2]=dp[0]+dp[1];
            dp[0]=dp[1];
            dp[1]=dp[2];
        }
        return dp[2];
    }
}