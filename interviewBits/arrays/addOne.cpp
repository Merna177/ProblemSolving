vector<int> Solution::plusOne(vector<int> &A) {
    int carry=1;
    vector<int> ans;
    for(int i=A.size()-1;i>=0;i--){
        if(carry==0){
          ans.push_back(A[i]);
          continue;
        }
        if(A[i]==9){
         ans.push_back(0);
        }else{
            A[i]++;
            ans.push_back(A[i]);
            carry=0;
        }
    }
    if(carry)
     ans.push_back(1);
     while(ans.size()!=0 && ans[ans.size()-1]==0)
      ans.pop_back();
    reverse(ans.begin(),ans.end());
    return ans;
}
