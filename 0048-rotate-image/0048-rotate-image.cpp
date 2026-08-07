class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        int m = arr.size() , n = arr[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                // if(arr[i]==arr[j]) continue;
                swap(arr[i][j],arr[j][i]);
            }
        }
        // Reverse Each row
        for(int i=0;i<n;i++){
            // reverse(arr[i].begin(),arr[i].end());
            int s =0 ,e =n-1;
            while(s<e){
                int temp=arr[i][s];
                arr[i][s]=arr[i][e];
                arr[i][e]=temp;
                s++;
                e--;
            }
        }
    }
};