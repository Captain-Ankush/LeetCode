bool isPossible(vector<int>& weights, int day,int mid){
    int daycnt = 1;
    int wsum = 0;
    for(int i=0;i<weights.size();i++){
        if(wsum + weights[i] <= mid){
            wsum += weights[i];
        }
        else{
            daycnt++;
            if(daycnt > day || weights[i] > mid){
                return false;
            }
            wsum = weights[i];
        }
    }
    return true;
}

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int s = 0;
        int sum = 0;
        for(int i=0;i<weights.size();i++){
            sum += weights[i];
        }
        int e = sum;
        int ans = -1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(isPossible(weights,days,mid)){
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