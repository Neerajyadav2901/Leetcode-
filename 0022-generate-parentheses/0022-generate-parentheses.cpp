class Solution {
public:
     void solve(string current , int open,int close, int n , vector<string> &ans){
        if(current.size() == 2*n){
            ans.push_back(current);
            return;
        }
         if(open < n){
            current += '(';
            solve(current,open+1,close,n,ans);
            current.pop_back();
         }

             if(close < open){
            current += ')';
            solve(current,open ,close+1 ,n,ans);
            current.pop_back();
         }
     }


    vector<string> generateParenthesis(int n) {
             vector<string> ans;
             solve("",0,0,n,ans);
             return ans;
 
        
    }
};