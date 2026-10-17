class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum == 0 || sum > 9*num){
            return "";
        }
        int digit = 0;
        string ans = "";
        for(int i = 0; i < num ; i++){
             digit = min(9 , sum);

             ans += to_string(digit);
             sum -= digit;
            
        }

        return ans;
        
    }
};