class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
       unordered_map<int,int> frequency;
       for(int arr : nums){
        frequency[arr]++;
       }
       for(auto &entry :frequency){
        if(entry.second == 1){
            ans.push_back(entry.first);
        }
       }
       return ans;
        
    }
};