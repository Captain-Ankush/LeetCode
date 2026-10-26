class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        int mid = s + (e-s)/2;
        while(s<e){
            if(nums[mid] >= nums[e]){
                s = mid + 1;
            }
            else {
                e = mid;
            }
            mid = s + (e-s)/2;
        }
        int pivot = e;
        if(target >= nums[pivot] && target <= nums[nums.size()-1]){
            int start = pivot;
            int end = nums.size() - 1;
            int mid = start + (end-start)/2;
            while(start<=end){
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid]<target){
                start = mid + 1;
            }
            else{
                end = mid-1;
            }
            mid = start + (end-start)/2;
        }
        }
        else{
            int start = 0;
            int end = pivot-1;
            int mid = start + (end-start)/2;
            while(start<=end){
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid]<target){
                start = mid + 1;
            }
            else{
                end = mid-1;
            }
            mid = start + (end-start)/2;
        }
        }
        return -1;
    }
};