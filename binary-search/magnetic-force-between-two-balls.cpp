bool isPossible(vector<int>& position, int m, int mid){
    int ballcnt = 1;
    int lastpos = position[0];
    for(int i=0;i<position.size();i++){
        if(position[i] - lastpos >= mid){
            ballcnt++;
            lastpos = position[i];
        }
        if(ballcnt >= m){
            return true;
        }
    }
    return false;
}

class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int low = 0;
        int high = position.back() - position.front();
        int ans = -1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(isPossible(position, m, mid)){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return ans;
    }
};