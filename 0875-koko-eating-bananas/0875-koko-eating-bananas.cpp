class Solution {
public:
    long long calculateTotalHour(vector<int>& piles,int speed){
        long long  totalH = 0;
        for(int bananas : piles){
            totalH +=((long long)bananas + speed -1) / speed;
        }
        return totalH;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
       int  maxElement = *max_element(piles.begin() , piles.end());
        int low = 1,high =  maxElement;
          int ans = maxElement;
        while(low<= high){
            int mid = low + (high - low)/2;
          long long   total_hr = calculateTotalHour(piles,mid);
            if(total_hr <= h){
                ans = mid;
                high = mid -1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }   

     
};