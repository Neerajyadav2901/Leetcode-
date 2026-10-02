class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
         string ans = "";
      for(int i = 0; i < s.size(); i++){
        int left = i;
        int right = i;
        while(left >=0 && right < n && s[left] == s[right]){
            left--;
            right++;
        }
        string temp =  s.substr(left + 1, right -left-1);
        if(temp.length() > ans.length()){
            ans = temp;
        }
       

        left = i,right = i+1;
         while(left >=0 && right < n && s[left] == s[right]){
            left--;
            right++;
         }
         temp = s.substr(left+1,right-left-1);
         if(temp.length() > ans.length()){
            ans = temp;
         }
         

      }
      return ans;
        
    }
};