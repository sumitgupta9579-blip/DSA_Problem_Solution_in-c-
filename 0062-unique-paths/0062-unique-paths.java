class Solution {
    // public int uniquePaths(int m, int n) {
    //     if(m==1 || n==1) return 1; 
    //     return uniquePaths(m-1,n) + uniquePaths(m,n-1);
        
    // }

    // public int paths(int cr , int cc , int lr , int lc , int[][] dp) {
    //    if(cr==lr && cc==lc) return 1 ;
    //    if(cr>lr || cc >lc) return 0;
    //    if(dp[cr][cc]!=-1) return dp[cr][cc];
    //    int right = paths(cr,cc+1,lr,lc,dp);
    //    int down = paths(cr+1,cc,lr,lc,dp);
    //    return dp[cr][cc]=right + down ;
    // }

    public int uniquePaths(int m, int n) {
        int [][] dp = new int[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 || j==0) dp[i][j]=1;
                else dp[i][j]=dp[i][j-1]+dp[i-1][j];
            }
        }
        return dp[m-1][n-1];
        
    }
}