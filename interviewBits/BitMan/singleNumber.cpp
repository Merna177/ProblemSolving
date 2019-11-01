int Solution::singleNumber(const vector<int> &A) {
  int sum = 0;
  int answer = 0;
  int num = 0;
  for(int i=0;i<32;i++){
    sum=0;
    for(int j=0;j<A.size();j++){
        num = (A[j] >> i);
        int lst = (num & 1);

        sum+=lst;

        
    }
    sum = sum%3;
    sum = sum <<i;
    answer = answer + sum;
  }
  return answer;
}
