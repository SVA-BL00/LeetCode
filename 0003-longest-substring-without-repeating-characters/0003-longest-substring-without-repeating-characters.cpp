#include <unordered_set>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxl = 0;
        int j = 0;
        unordered_set<char> seen;
        for(int i = 0; i < s.size(); i++){
            while(seen.find(s[i]) != seen.end()){
                seen.erase(s[j]);
                j++;
            }
            seen.insert(s[i]);
            maxl = max(maxl, i - j + 1);
        }
        return maxl;
    }
};