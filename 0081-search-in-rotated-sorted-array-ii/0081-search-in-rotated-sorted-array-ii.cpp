class Solution {
public:
    bool search(vector<int>& nums, int target) {
      int n = nums.size() - 1;
      int low = 0,high = n;

     while(low <= high){
        if(nums[low]== target || nums[high]== target){
            return true;
        }
       

        int mid = low + (high - low)/2;

        if(nums[mid]== nums[low] && nums[mid]==nums[high]){
            low++;
            high--;
            continue;
        }
         if(nums[mid]== target){
            return true;
        }

         if(nums[low]<= nums[mid]){
            if(nums[low] <= target && target < nums[mid]){
                high = mid -1;
            }
            else{
                low = mid +1;
            }
         }
         else{
            if(nums[mid]<target && target <= nums[high]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
         }
     }

     return false;

     }
};

