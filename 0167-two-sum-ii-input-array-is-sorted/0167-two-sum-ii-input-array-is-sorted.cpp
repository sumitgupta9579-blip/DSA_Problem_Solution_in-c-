class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int tar) {
        vector<int> ans(2);
        int n = arr.size();
        int i=0 ,j=n-1;
        while(i<j){
            if(arr[i]+arr[j]>tar) j--;
            else if(arr[i]+arr[j]<tar) i++;
            else{
                ans[0]=i+1;
                ans[1]=j+1;
                break;
            }
        }
        return ans ;
    }
};