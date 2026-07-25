class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
      int n = nums.size();
      int posindex = 0, nosindex = 1;
     vector<int> ans(n,0);
      for(int i=0;i <nums.size(); i++){
        if(nums[i] > 0){
            ans[posindex] = nums[i];
            posindex += 2;
        }
        else{
            ans[nosindex] = nums[i];
            nosindex += 2;
        }

       
      }  
      return ans;
        
    }
};