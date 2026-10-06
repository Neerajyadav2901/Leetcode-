class Solution {
public:
    int minAddToMakeValid(string s) {
        if(s.empty()){
            return 0;
        }
        int ans = 0;
        int depth = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                depth++;
            }
            else{
                if(depth > 0){
                    depth--;
                }
                else{
                    ans++;
                }
            }
        }
      ans += depth;
        return ans;
        
    }
};