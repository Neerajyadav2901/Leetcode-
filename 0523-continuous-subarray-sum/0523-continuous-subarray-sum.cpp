class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int sum = 0,rem;
        unordered_map<int,int> remcount;
        remcount[0]= -1;
        for(int i =0; i <= nums.size()-1;i++){
            sum += nums[i];
            rem = sum%k;
            
            if(remcount.find(rem) != remcount.end()){
                if(i - remcount[rem] >= 2)
                    return true;
                }
                else{
                remcount[rem] = i;
            }
        }
        return false;
        

    }  
};