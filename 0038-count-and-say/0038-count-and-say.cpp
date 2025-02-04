class Solution {
public:
    string RLE(string s){
        string final = "";
        int i = 0;

        while(i < s.size()){
            char current = s[i];
            int count = 0;

            while(i < s.size() && s[i] == current){
                count++;
                i++;
            }

            final += to_string(count) + current;
        }

        return final;
    }

    string countAndSay(int n) {
        string res = "1";
        for(int i = 0; i < n-1; i++){
            res = RLE(res);
        }

        return res;
    }
};