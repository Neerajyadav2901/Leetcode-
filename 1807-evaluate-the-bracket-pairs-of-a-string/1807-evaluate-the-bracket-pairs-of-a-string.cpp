class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        
        // Step 1: Store key-value pairs in map
        unordered_map<string, string> mp;
        
        for (auto pair : knowledge) {
            mp[pair[0]] = pair[1];
        }

        string ans = "";

        // Step 2: Traverse the string
        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '(') {
                string key = "";
                i++;   // '(' ko skip karo

                // Step 3: '(' se ')' tak key banao
                while (s[i] != ')') {
                    key += s[i];
                    i++;
                }

                // Step 4: Map se value nikalo
                if (mp.find(key) != mp.end()) {
                    ans += mp[key];
                } 
                else {
                    ans += "?";
                }
            }
            else {
                // Normal character
                ans += s[i];
            }
        }

        return ans;
    }
};