class Solution {
public:
    int punishmentNumber(int n) {
        vector<int> verified = {1,9,10,36,45,55,82,91,99,100,235,297,369,370,379,414,
                           657,675,703,756,792,909,918,945,964,990,991,999,1000};
        int res = 0;
        for(int i = 0; i < verified.size(); i++){
            if(verified[i] <= n) res += verified[i] * verified[i];
            else break;
        }

        return res;
    }
};