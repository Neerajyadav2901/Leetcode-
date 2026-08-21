class Solution {
public:
     int Totaldays(vector<int>& weights, int cap){
        int day =1, load = 0;
        for(int i =0;i < weights.size();i++){
            if(load + weights[i] > cap){
                day = day +1;
                load = weights[i];
            }
            else{
                load += weights[i];
            }
        }
        return day;
     }



    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
         int sum = 0;
        for(int i = 0; i < weights.size();i++){
        
         sum += weights[i];
        }
        int high =  sum;

        while(low <= high){
           int mid = (low + high)/2;
            if(Totaldays(weights,mid) > days){
                low = mid +1;
            }
            else{
                
                 high = mid-1;
            }
        }
        return low;
       

        
    }
};