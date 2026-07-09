class Solution {

    int[][] dp;

    public int solve(int idx, int target, List<Integer> nums) {

        if (target == 0)
            return 0;

        if (idx == nums.size() || target < 0)
            return -(int)1e9;

        if (dp[idx][target] != -1)
            return dp[idx][target];

        int take = 1 + solve(idx + 1, target - nums.get(idx), nums);

        int skip = solve(idx + 1, target, nums);

        return dp[idx][target] = Math.max(take, skip);
    }

    public int lengthOfLongestSubsequence(List<Integer> nums, int target) {

        dp = new int[nums.size()][target + 1];

        for (int[] row : dp)
            Arrays.fill(row, -1);

        int ans = solve(0, target, nums);

        return ans < 0 ? -1 : ans;
    }
}