class Solution {
public:
    string removeOccurrences(string s, string part) {
        string res; // create a new string to return the result
        int m = part.size();
        char k = part.back(); // k is the final character of part

        for(char curr : s){
            res.push_back(curr); // add characters to res in each iteration

            // if the current character is the same as the last in part, and the
            // size of our result is currently bigger or equal to the size of part,
            // check if the substring of the size m in res is equal to part.
            // if it is, erase.
            
            if(curr == k && res.size() >= m){
                if(res.substr(res.size() - m) == part){
                    res.erase(res.size() - m);
                }
            }
        }

        return res;
    }
};