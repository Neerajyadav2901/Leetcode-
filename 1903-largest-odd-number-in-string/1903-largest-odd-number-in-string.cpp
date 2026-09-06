

class Solution {
public:
    string largestOddNumber(string num) {
        int idx = num.size();
        string ans;
        for( int i  = num.size()-1; i >= 0;i--){
            if(num[i]%2 == 0){
              idx--;
             
            }
             if(num[i]%2 != 0){
                ans =  num.substr(0,idx);
              break;  
            }
            

        }
      
        return ans;
    }
}; 