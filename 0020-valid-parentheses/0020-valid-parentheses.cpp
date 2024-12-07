#include <stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> parent;
        for(int i = 0; i < s.size(); i++){
            if(!parent.empty() && s[i] == ')' && parent.top() == '('){
                parent.pop();
            }else if(!parent.empty() && s[i] == ']' && parent.top() == '['){
                parent.pop();
            }else if(!parent.empty() && s[i] == '}' && parent.top() == '{'){
                parent.pop();
            }else{
                parent.push(s[i]);
            } 
        }
        if(parent.empty()){
            return true;
        }else{
            return false;
        }
    }
};