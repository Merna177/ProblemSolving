class Solution {
public:
    int hammingDistance(int x, int y) {
      int diff=0;
      for(int i=0;i<31;i++)
      {
          if(((x>>i)%2) !=((y>>i)%2))
              diff++;
          
      }
      return diff;
    }
};
