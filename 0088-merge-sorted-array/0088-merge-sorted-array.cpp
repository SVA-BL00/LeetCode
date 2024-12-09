class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n == 0 && m == 1){
            return;
        }
        
        if(n == 1 && m == 0){
            nums1[0] = nums2[0];
            return;
        }

        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while(j >= 0){
            if(i >= 0 && nums1[i] > nums2[j]){
                nums1[k] = nums1[i];
                i--;
            }else{
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }
    }
};