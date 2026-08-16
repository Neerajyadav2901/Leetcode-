class Solution {
public:

int firstFind(vector<int> &nums,int target){
    
 int start = 0,end = nums.size()-1;
       int res = -1;
       

 while(start <= end){
            int mid = start + (end - start)/2;
            if(nums[mid] == target){
                res = mid;
                end = mid -1;
            }
            else if(target < nums[mid]){
                end = mid -1;
            }
            else{
                start = mid +1;
            }
        }
        return res;
        
    }


int lastFind(vector<int> &nums,int target){
 int start = 0,end = nums.size()-1;
       int  res = -1;
         

 while(start <= end){
            int mid = start + (end - start)/2;
            if(nums[mid] == target){
                res = mid;
                start = mid+1;
            }
            else if(target < nums[mid]){
                end = mid -1;
            }
            else{
                start = mid +1;
            }
        }
        return res;
        
    }


    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
       int first = firstFind(nums,target);
       int last = lastFind(nums,target);
       vector<int> ans;
       if(first == -1){
        return ans;
       }

       for(int i= first; i <= last; i++){
        ans.push_back(i);
       }
       return ans;
    } 
 };
