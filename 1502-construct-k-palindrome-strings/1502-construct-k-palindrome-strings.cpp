#include <unordered_map>
class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size() < k) return false;
        unordered_map<char, int> map;
        for(int i = 0; i < s.size(); i++){
            map[s[i]]++;
        }
        int count = 0;
        for(const auto pair : map){
            if(pair.second % 2 != 0){
                count++;
            }
        }
        return (count <= k);
    }
};