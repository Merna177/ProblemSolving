class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        vector<int> subset;
        int cnt=2;
        int diff=-1;
        for(int i=1;i<A.size();i++){
            if(i==1)
                diff=A[1]-A[0];
            else
            {
                if(A[i]-A[i-1]==diff)
                    cnt++;
                else{
                    if(cnt>=3)
                        subset.push_back(cnt);
                    cnt=2;
                    diff=A[i]-A[i-1];
                }
            }
        }
        if(cnt>=3)
            subset.push_back(cnt);
       int ret=0;
       for(int i=0;i<subset.size();i++){
           int x= subset[i]-3 +1;
           ret+=((x*(x+1))/2);
       }
        return ret;
    }
};
