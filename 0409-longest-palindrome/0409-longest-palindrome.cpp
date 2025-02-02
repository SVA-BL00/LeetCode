class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> seen;
        for(int i = 0; i < s.size(); i++){
            seen[s[i]]++;
        }

        int res = 0;
        bool hasOdd = false;
        for(auto i: seen){
            if(i.second % 2 == 0){
                res += i.second;
            }else{
                res += i.second - 1;
                hasOdd = true;
            }
        }

        if(hasOdd) res++;
        return res;
    }
};