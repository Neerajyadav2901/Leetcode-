class Solution {
public:
    int atmost(vector<int>& nums, int k) {
        int l = 0, r = 0,sum = 0, count = 0;
        if(k < 0 ){
            return 0;
        }
        while(r < nums.size()){
            if(nums[r]%2 != 0){
                sum++;
            }
            while(sum > k){
                if(nums[l] %2 != 0){
                    sum--;
                   
                }
                l++;
            }
            count = count + (r-l+1);
            r++;
        }
       return count;
        
    }

      int numberOfSubarrays(vector<int>& nums, int k){
        return atmost(nums,k) - atmost(nums,k-1);
      }


};