class Solution {
public:
    int countRotations(string s, int k) {

        int equalpairs = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == s[(i+1)%s.size()]){
                equalpairs++;
            }
           
        }
        if(k == equalpairs){
            return  s.size()- equalpairs;
        }
        if(k == equalpairs-1){
            return equalpairs;
        }
        return 0;
        
    }
};