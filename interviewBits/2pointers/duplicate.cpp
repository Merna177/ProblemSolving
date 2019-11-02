int Solution::removeDuplicates(vector<int> &A) {
    int i=0;
    int j=1;
    while(j<A.size()){
        if(A[i]==A[j])
          j++;
        else 
        {
            A[i+1]=A[j];
            i++;
            j++;
        }
    }
    return i+1;
}
