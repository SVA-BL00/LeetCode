class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> freq;
        
        for(int i = 0; i < t.size(); i++){
            freq[t[i]]++;
        }

        for(int i = 0; i < s.size(); i++){
            if(freq.count(s[i]) == 1){
                freq[s[i]]--;
                if(freq[s[i]] < 0) return false;
            }else{
                return false;
            }
        }

        for(auto i: freq){
            if(i.second != 0) return false;
        }

        return true;
    }
};