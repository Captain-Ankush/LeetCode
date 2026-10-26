bool  isPossible(vector<int>& nums, int k,int mid){
    int arrcnt = 1;
    int arrsum = 0;
    for(int i=0;i<nums.size();i++){
        if(arrsum + nums[i] <= mid){
            arrsum += nums[i];
        }
        else{
            arrcnt++;
            if(arrcnt > k || nums[i] > mid){
                return false;
            }
            arrsum = nums[i];
        }
    }
    return true;
}

class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int s = 0;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
        }
        int e = sum;
        int ans = -1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(isPossible(nums,k,mid)){
                ans = mid;
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
    return ans;   
    }
};