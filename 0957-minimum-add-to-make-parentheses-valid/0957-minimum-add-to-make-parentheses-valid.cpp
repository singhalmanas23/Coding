class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int op=0,close=0;
        for(auto ch:s){
            if(ch=='('){
                op++;
            }
            else if(op>0){
                op--;
            }
            else{
                close++;
            }
        }

        return op+close;
        
    }
};