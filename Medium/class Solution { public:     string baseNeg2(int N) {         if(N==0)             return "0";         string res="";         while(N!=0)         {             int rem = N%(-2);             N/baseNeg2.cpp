class Solution {
public:
    string baseNeg2(int N) {
        if(N==0)
            return "0";
        string res="";
        while(N!=0)
        {
            int rem = N%(-2);
            N /= -2;
            if(rem<0)
            {
                rem+=2;
                N++;
            }
            res = to_string(rem) + res;
        }
        return res;
        
    }
};
