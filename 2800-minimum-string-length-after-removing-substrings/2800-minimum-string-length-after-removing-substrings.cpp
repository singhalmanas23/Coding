class Solution {
public:
    int minLength(string s) {
        stack<char>st;
        st.push('#');
        for(int i=0;i<s.length();i++){
            st.push(s[i]);
            if(st.top()=='B')
            {
                st.pop();
                if(st.top()=='A') st.pop();
                else st.push('B');
            }
            if(st.top()=='D'){
                st.pop();
                if(st.top()=='C') st.pop();
                else st.push('D');
            }
        }
        return st.size()-1;
    }
};