class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
      int cnt=0;
      for(int i=0;i<arr.size();i++){
          if(arr[i]==0)
              cnt++;
      }
      int j=arr.size()+cnt-1;
      int i=arr.size()-1;
      while(j>=i && i>=0){
          if(arr[i]==0){
              if(j<arr.size()){
                  arr[j]=0;
                  j--;
                  arr[j]=0;
                  j--;
              }
              else
              {
                  j--;
                  if(j<arr.size())arr[j]=0;
                  j--;
              }
              
          }else {
              if(j<arr.size())
                  arr[j]=arr[i];
              j--;
          }
          i--;
      }
     }
};
