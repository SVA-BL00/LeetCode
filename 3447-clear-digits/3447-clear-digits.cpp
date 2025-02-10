class Solution {
public:
    string clearDigits(string s) {
        int i = 0 ;
        while(i < s.size()){
            if(!isdigit(s[i])){
                i++;
            }else{
                s.erase(s.begin() +i);
                s.erase(s.begin() +i - 1);
                i--;
            }

        }

        return s;
    }
};