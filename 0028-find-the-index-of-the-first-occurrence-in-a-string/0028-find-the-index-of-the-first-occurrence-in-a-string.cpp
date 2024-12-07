class Solution {
public:
    int strStr(string haystack, string needle) {
        int j = 0;
        int indexf = -1;
        for(int i = 0; i < haystack.size(); i++){
            if(haystack[i] == needle[j]){
                if (j == 0){
                    indexf = i;
                }
                j++;
                if(j == needle.size()){
                    return indexf;
                }
            }else if(j > 0){
                i = indexf;
                j = 0;
                indexf = -1;
            }
        }
        return -1;
    }
};