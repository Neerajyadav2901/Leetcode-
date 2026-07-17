class Solution {
public:
    bool checkValidString(string s) {

        int mino = 0,maxo = 0;

       for(char c : s){
        if(c== '('){
            mino = mino + 1;
            maxo = maxo +1;
        }
        else if(c == ')'){
            mino--;
            maxo--;
        }
        else{
            mino--;
            maxo++;
        }
        if(maxo < 0)
        return false;
         
         mino = max(mino ,0);


       }

       return ( mino == 0);
        
    }
};