class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector <int> ans;
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            int index = abs(num)-1;
            if(nums[index]>0){
                nums[index] = -nums[index];
            }
            else{
                ans.push_back(abs(num));
            }
        }
        return ans;
    }
};