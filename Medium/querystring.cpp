class Solution {
public:
    bool queryString(string S, int N) {
    string wanted = "1";
	for(int k=1;k<=N; k++) {
		if(S.find(wanted) == string::npos) return false;
		int n=wanted.size();
		int carry = 1;
		for(int i=n-1; i>=0; i--) {
			int b = wanted[i]-'0' + carry;
			if(b == 2) {
				wanted[i]='0';
				carry = 1;
			} else if(b == 1) {
				wanted[i] = '1';
				carry = 0;
				break;
			} else {
				wanted[i] = '0';
				carry = 0;
				break;
			}
		}
		if(carry)  
         wanted = "1" + wanted;
    }
        return true;
    }
};
