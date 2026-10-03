class Solution {
public:
    int longestValidParentheses(string s) {
        if(s.empty()){
            return 0;
        }
        stack<int> st;
        int ans = 0;
        st.push(-1);
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                st.push(i);
            }
           else{
            st.pop();
             if(st.empty()){
                st.push(i);
            }
            else{
               int length = i - st.top();
                ans = max(ans , length);
            }

           }
           

        }
        return ans;
        
    }
};