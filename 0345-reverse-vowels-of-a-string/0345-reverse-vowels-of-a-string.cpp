class Solution {
public:
    int isVowel(char ch){
        string str = "aeiouAEIOU";
        return (str.find(ch) != string::npos);
    }
    string reverseVowels(string s) {
        stack<char> vowels;
        vector<int> indices;
        for(int i = 0; i < s.size(); i++){
            if(isVowel(s[i])){
                indices.push_back(i);
                vowels.push(s[i]);
            }
        }

        for(int i = 0; i < indices.size(); i++){
            s[indices[i]] = vowels.top();
            vowels.pop();
        }

        return s;
    }
};