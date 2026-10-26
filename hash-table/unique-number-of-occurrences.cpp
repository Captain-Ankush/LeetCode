class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map <int,int> freq;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        set <int> seen;
        for(auto &p : freq){
            int frequency = p.second;
            if(seen.find(frequency) != seen.end()){
                return false;
            }
            seen.insert(frequency);
        }
        return true;
    }
};