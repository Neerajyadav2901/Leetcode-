class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long  k = 1;
        while(k <= n){
            if(k==n){
                return true;
            }
            k = k*2;
        }
       
   return false;
    }
};