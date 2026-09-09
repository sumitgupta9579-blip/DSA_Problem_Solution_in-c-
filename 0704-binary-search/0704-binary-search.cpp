class Solution {
public:
    int BS(int lo , int hi , int target ,vector<int>& arr){
        if(lo>hi) return -1;
        int mid =(lo+hi)/2;
        if(arr[mid]>target) return BS(lo,mid-1,target,arr);
        else if(arr[mid]<target) return BS(mid+1,hi,target,arr);
        else return mid;
    }
    int search(vector<int>& arr, int target) {
        int n =arr.size();
        return BS(0,n-1,target,arr);
    }
};