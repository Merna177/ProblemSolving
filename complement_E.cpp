class Solution {
public:
    int findComplement(int num) {
        int answer = 0;
        int bits = 0;
        for(int i=0;i<32;i++){
            if((num>>i) % 2== 1)
                bits =i;
        }
        bits++;
        for(int i=0;i<bits;i++){
            if((num>>i)% 2 == 0)
                answer = answer + (1<<i);
        }
        return answer;
    }
};
