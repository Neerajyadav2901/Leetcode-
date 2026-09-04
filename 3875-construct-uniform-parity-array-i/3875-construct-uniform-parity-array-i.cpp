class Solution {
public:
    bool uniformArray(vector<int>& nums1 ) {
      vector<int>  nums2;
         for(int i = 0; i < nums1.size()-1 ;i++){
            if(nums1[i]%2 == 0 ){
            nums2.push_back( nums1[i]);
            }

            if( nums1[i]%2 != 0){
              nums2.push_back( nums1[i]);
            }

           if(nums1[i]%2 == 0 && nums1[i+1]%2 != 0 ){
            nums2[i] = nums1[i] - nums1[i+1];
           nums2.push_back(nums2[i]);
           }
           else if(nums1[i+1]%2 != 0 && nums1[i]%2 == 0){
            nums2[i] = nums1[i+1] - nums1[i];
            nums2.push_back(nums2[i]);
           }
           else{
            nums2.push_back(nums1[i]);
           }
          
       
        }

      
       
       
        
        
     return true;

        
    }
};