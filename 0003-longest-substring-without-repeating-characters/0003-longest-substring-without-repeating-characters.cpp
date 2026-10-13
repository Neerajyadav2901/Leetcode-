class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> map;
        int n = s.size();
        int l = 0,r=0, maxlen = 0;
        while(r<n){
            if(map.find(s[r])!= map.end()){
                if(map[s[r]] >= l){
                    l = map[s[r]] + 1;
                }
            }
           int len = r-l +1;
            maxlen = max(len, maxlen);
            map[s[r]] = r;
            r++;
        }
        return maxlen;
        
    }
};