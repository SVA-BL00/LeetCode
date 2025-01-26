class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int maxLength = max(word1.size(), word2.size());
        string res;
        for(int i = 0; i < maxLength; i++){
            if(i + 1 <= word1.size()){
                res.push_back(word1[i]);
            }

            if(i + 1 <= word2.size()){
                res.push_back(word2[i]);
            }
        }

        return res;
    }
};