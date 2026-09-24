class Solution {
public:
    int smallestIndex(vector<int>& nums) {
       
        for(int i = 0; i < nums.size(); i ++){
             long long sum = 0;
             int n = nums[i];

            while(n>0){
                int digits = n% 10;
                n /= 10;

                sum += digits; 
            }
                if( sum == i){
                    return i;
                }
            
        }
        return -1;
        
    }
};