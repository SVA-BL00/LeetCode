class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int first = nums1.size();
        int second = nums2.size();
        int x1 = 0, x2 = 0;

        if(first % 2 != 0){
            for(int i = 0; i < second; i++){
                x2 ^= nums2[i];
            }
        }

        if(second % 2 != 0){
            for(int i = 0; i < first; i++){
                x1 ^= nums1[i];
            }
        }

        return x1 ^ x2;
    }
};