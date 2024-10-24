class Solution {
public:
    int romanToInt(string s) {
        bool mustSkip = false;
        int sum = 0;
        for(int i = 0; i < s.size(); i++){
            
            if(mustSkip){
                mustSkip = false;
                continue;
            }
            
            switch(s[i]){
                case 'I':
                    if(s[i + 1] == 'X'){
                        sum += 9;
                        mustSkip = true;
                    }else if(s[i + 1] == 'V'){
                        sum += 4;
                        mustSkip = true;
                    }else{
                        sum++;
                    }
                    break;
                case 'V':
                    sum += 5;
                    break;
                case 'X':
                    if(s[i + 1] == 'L'){
                        sum += 40;
                        mustSkip = true;
                    }else if(s[i + 1] == 'C'){
                        sum += 90;
                        mustSkip = true;
                    }else{
                        sum += 10;
                    }
                    break;
                case 'L':
                    sum += 50;
                    break;
                case 'C':
                    if(s[i + 1] == 'D'){
                        sum += 400;
                        mustSkip = true;
                    }else if(s[i + 1] == 'M'){
                        sum += 900;
                        mustSkip = true;
                    }else{
                        sum += 100;
                    }
                    break;
                case 'D':
                    sum += 500;
                    break;
                case 'M':
                    sum += 1000;
                    break;
                default:
                    sum += 0;
            }
        }
      return sum;
    }
};