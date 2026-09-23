class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
      int n = nums.size();
       int totalsum = 0;
       for(int i = 0; i < nums.size(); i++){
        totalsum += nums[i];

       }
       int target = totalsum - x;
       if(target <0){
        return -1;
       }
        int left = 0;
       int sum = 0;
       int longest = -1;
       for(int r = 0; r <nums.size(); r++){
        sum += nums[r];
       
       while(sum > target){
            sum -= nums[left];
            left++; 
       }
       if(sum == target){
        longest =  max(longest , r-left+1);
       }
       }
       if(longest == -1){
        return -1;
       }
      return n-longest;  
    }
};