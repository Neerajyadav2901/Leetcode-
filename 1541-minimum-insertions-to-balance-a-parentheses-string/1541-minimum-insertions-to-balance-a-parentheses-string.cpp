
class Solution {
public:
    int minInsertions(string s) {
        int depth = 0;
        int ans = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                depth += 2;

                if (depth % 2 != 0) {
                    ans++;
                    depth--;
                }
            }
            else {
                depth--;

                if (depth < 0) {
                    ans++;
                    depth = 1;
                }
            }
        }

        ans += depth;
        return ans;
    }
};
