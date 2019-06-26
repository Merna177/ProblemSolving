#include <algorithm>    // std::reverse
class Solution {
public:
    string removeDuplicates(string S) {
        stack<int> st;
        st.push(S[0]);
for (int i=1;i<S.size();i++){
   if(st.empty())
   {
     st.push(S[i]);
     continue;
   }
   else if(S[i]==st.top()){
       st.pop();
   }
   else {
       st.push(S[i]);
   }

}
 string output ="";
 while(!st.empty()){
     output += st.top();
     st.pop();
 }
 reverse(output.begin(),output.end());
 return output;
    }
};
