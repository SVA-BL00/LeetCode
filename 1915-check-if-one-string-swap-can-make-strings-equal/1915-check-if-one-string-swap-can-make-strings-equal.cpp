class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int i = -1, j = -1;
        int counter = 0;

        for(int k = 0; k < s1.size(); k++){
            if(s1[k] != s2[k]){
                counter++;
                if(i == -1){
                    i = k;
                }else if(j == -1){
                    j = k;
                }
            }
        }

        if(counter == 0) return true;
        if(counter == 2 && s1[i] == s2[j] && s1[j] == s2[i]) return true;
        return false;
    }
};