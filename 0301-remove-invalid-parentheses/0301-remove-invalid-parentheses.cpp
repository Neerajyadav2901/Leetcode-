class Solution {
public:
         
void Solve(string &s,int index,string current,int balance , 
          int leftRemove,int rightRemove,set<string> &st){
            if(index == s.size()){
                if(balance == 0 && 
                leftRemove == 0 && rightRemove == 0){
                    st.insert(current);
                }
                return;
            }
            char ch = s[index];
            if( ch == '('){
                if(leftRemove > 0){
                    Solve(s,index+1,current,balance,leftRemove-1, rightRemove,st);
                }
                Solve(s, index+1,current +'(',balance+1,leftRemove,rightRemove,st);
            }

        else if( ch == ')'){
            if(rightRemove > 0){
                Solve(s, index+1, current , balance,leftRemove, rightRemove-1,st);
            }
            if(balance > 0){
                Solve(s, index+1, current+')', balance-1, leftRemove, rightRemove ,st);
            }
        }
         
         else{
            Solve(s, index+1, current+ch,balance,leftRemove, rightRemove,st);
         }

        }





    vector<string> removeInvalidParentheses(string s) {
       
        int balance = 0;
        int leftRemove = 0;
        int rightRemove = 0;
        
        for(char ch : s){
            if(ch == '('){
                balance++;
            }
           
            else if(ch == ')'){
                if(balance >0){
                balance--;     
                }
                else{
                    rightRemove++;
                }  
               
                  
            }

        }
        leftRemove = balance;
        set <string> st;
        Solve(s, 0,"",0,leftRemove,rightRemove,st);
        vector<string> ans;
        for(string str : st){
            ans.push_back(str);
        }
         return ans;  
    }
};