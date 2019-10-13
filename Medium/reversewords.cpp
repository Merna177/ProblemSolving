class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' ')
                temp+=s[i];
            else {
                if(temp.size()>0)
                st.push(temp);
                temp="";
            }
                
        }
        if(temp.size()>0)
            st.push(temp);
        temp="";
        while(!st.empty()){
            if(temp.size()>0)
                temp+=' ';
            temp+=st.top();
            st.pop();
        }
        return temp;
    }
};
