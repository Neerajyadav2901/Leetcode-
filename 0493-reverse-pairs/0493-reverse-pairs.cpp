class Solution {
public:
    
        void merge(vector<int> &nums,int st,int mid,int end){
            vector<int> temp;
            int i= st,j = mid+1;
            while(i <= mid && j <= end){
                if(nums[i] <= nums[j]){
                    temp.push_back(nums[i]);
                    i++;
                }
                else{
                     temp.push_back(nums[j]);
                    j++;
                }
            }
            while(i <= mid){
                temp.push_back(nums[i]);
                    i++;  
            }
               while(j <= end){
                temp.push_back(nums[j]);
                    j++;  
            }
            for(int i =0 ; i < temp.size();i++){
                nums[st + i] = temp[i];
            }

        }

        int countPairs(vector<int> &nums, int low, int mid, int high){
           int right = mid+1, count = 0;
            for(int i =low ; i <=mid; i++){
                while(right <= high && (long long)nums[i] > 2LL * nums[right]) right++;
                 count += (right - (mid +1));
            }
            return count;
        }

        int mergeSort(vector<int> &nums, int low, int high){
            int cnt = 0;
            if(low >= high) return cnt;
            int mid = (low+high)/2;
            cnt += mergeSort(nums,low,mid);
            cnt += mergeSort(nums, mid+1, high);
            cnt += countPairs(nums,low,mid,high);
            merge(nums,low, mid,high);
            return cnt;
        }
         int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }
        
};