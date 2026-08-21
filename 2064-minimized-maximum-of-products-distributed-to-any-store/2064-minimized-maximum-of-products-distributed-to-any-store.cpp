class Solution {
public:
     int stores(vector<int> & quantities,int div){
        int store = 0;
        for(int i =0;i< quantities.size();i++){
             store += (quantities[i] + div -1) / div;
        }
        return store;
     }


    int minimizedMaximum(int n, vector<int>& quantities) {
        int low =1, high = *max_element(quantities.begin(),quantities.end());
        while(low<=high){
           int mid = (low + high)/2;

            if(stores(quantities,mid) <= n){
                high = mid -1;
            }
            else{
                low = mid+1;
            }
        }
             
        return low ;

        
    }
};