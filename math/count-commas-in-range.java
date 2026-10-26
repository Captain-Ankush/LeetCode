class Solution {
    public int countCommas(int n) {
        int num = n - 1000 + 1;
        int num1 = n - 1000000 + 1;
        int res = num1 * 2;
        if(n<1000){
            return 0;
        }
        else if(n<=100000){
            return num;
        }
        else{
            return num + res;
        }
    }
}

