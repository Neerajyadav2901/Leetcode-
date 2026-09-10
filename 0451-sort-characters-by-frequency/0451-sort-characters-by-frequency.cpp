class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> map;
        for(char c : s){
            map[c]++;
        }
      vector<pair<char,int>> v(map.begin(),map.end()) ;
      sort(v.begin(),v.end(),[](auto &a, auto &b){
        return a.second > b.second;
      });
      string ans = "";
      for(auto &p :v){
        ans += string(p.second, p.first);
      }
       return ans;
        
    }
};