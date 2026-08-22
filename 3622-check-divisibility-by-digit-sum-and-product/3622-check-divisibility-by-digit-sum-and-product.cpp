class Solution {
public:
    bool checkDivisibility(int n) {
        int sum =0,product = 1;
         int x;
         int digits ;
         int original = n;
        while(n>0){
            digits= n%10;
            
            sum += digits;
            
            product *= digits;
            n = n/10;
        }
         x = (sum + product);
        
        return original % x ==0;
       
     }
  
    
};