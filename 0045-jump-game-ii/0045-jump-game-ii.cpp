class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int maxIndex = 0;
        int end = 0;
        for(int i = 0 ; i < n -1; i++){
            maxIndex = max(maxIndex , i+ nums[i]);
            if(i== end){
                count++;
                end = maxIndex;
            }  
        }
        
     return count;
        
    }
};