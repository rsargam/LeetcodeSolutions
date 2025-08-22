// Last updated: 22/08/2025, 23:52:29
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
       
        int start=0;
        int end=arr.size()-1;
        while(start<end){
            int mid=start+(end-start)/2;
            if(arr[mid]<arr[mid+1]){
                start=mid+1;
            }
            else{
                end=mid;
            }
        }
        return start;

    }
};