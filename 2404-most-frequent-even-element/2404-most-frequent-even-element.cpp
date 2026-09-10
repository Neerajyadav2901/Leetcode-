class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int c : nums){
           
            if(c %2 == 0){
              mp[c]++;
            }
        }
            int maxfreq = 0;
            int ans = -1;
            for(auto &p : mp){
               if(p.second > maxfreq){
                ans = p.first;
                maxfreq = p.second;
               }
               
               if( p.first < ans && p.second == maxfreq){
                ans = p.first;

               }

               

            }
          

          
           
        
         return ans;  
    }
};