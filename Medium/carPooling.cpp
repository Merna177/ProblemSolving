class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
      int arr[1001];
      memset(arr,0,sizeof arr);
      for(int i=0;i<trips.size();i++){
          int num=trips[i][0];
          int start=trips[i][1];
          int ed=trips[i][2];
          arr[start]+=num;
          arr[ed]-=num;
      }
        if(arr[0]>capacity)return false;
      for(int i=1;i<1001;i++){
          arr[i]+=arr[i-1];
          if(arr[i]>capacity)
          {   
              return false;
          }
      }
        return true;
    }
};
