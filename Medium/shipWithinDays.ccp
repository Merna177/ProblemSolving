class Solution {
public:
    int shipWithinDays(vector<int>& weights, int D) {
        int left=0;
        int right =0;
        for(int i=0;i<weights.size();i++)
        {
            left = max(left,weights[i]);
            right+=weights[i];
        }
        if(D ==1)
            return right;
        while(left<right ){
            int mid = (left+right)/2;
            int cnt=0,days=1;
            for(int i=0;i<weights.size();i++){
                if(cnt+weights[i]>mid)
                {
                    days+=1;
                    cnt=0;
                }
                cnt+=weights[i];
            }
            if(days>D)
            {
                left=mid+1;
            }else {
                right =mid;
            }
        }
        return left;
    }
};
