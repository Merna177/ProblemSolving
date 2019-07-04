class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
      vector<int> dest;
      for(int i =0;i<S.size();i++){
          if(S[i]==C)
              dest.push_back(i);
      }
      int prev = -1;
      int index= 0 ;
      int next= dest[index];
      vector<int> output;
      for(int i=0;i<S.size();i++){
          if(i <= next){
              if(prev==-1)
                output.push_back(next-i);
              else 
                output.push_back(min(i-prev,next-i));
          }
          else{
              prev=next;
              index++;
              if(index>=dest.size()){
                  next  = -1;
                  output.push_back(i-dest[dest.size()-1]);
              }else
              {
                  next = dest[index];
                  output.push_back(min(i-prev,next-i));
              }
              
          }
      }
        return output;
    }
};
