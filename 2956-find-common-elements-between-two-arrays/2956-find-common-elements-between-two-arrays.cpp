class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& arr, vector<int>& brr) {
        int count_1 = 0 , count_2 = 0; 

        for(int i=0;i<arr.size();i++){
            for(int j=0;j<brr.size();j++){
                if(arr[i]==brr[j]){
                    count_1 ++;
                    break;
                }
            }
        }

        for(int i=0;i<brr.size();i++){
            for(int j=0;j<arr.size();j++){
                if(brr[i]==arr[j]){
                    count_2 ++;
                    break;
                }
            }
        }
        return {count_1 , count_2};
    }
};