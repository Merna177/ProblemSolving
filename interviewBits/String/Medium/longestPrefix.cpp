string Solution::longestCommonPrefix(vector<string> &A) {
    int mnLen= INT_MAX;
    for(int i=0;i<A.size();i++)
      mnLen =min(mnLen,(int)A[i].size());
    string ans= "";
    for(int i=0;i<mnLen;i++){
        char c = A[0][i];
        int flag=0;
        for(int j=1;j<A.size();j++){
            if(A[j][i]!=c){
                flag=1;
                break;
            }
        }
        if(flag==0)
         ans+=c;
         else
         break;
    }
    return ans;
}
