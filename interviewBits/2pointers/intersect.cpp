vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    int pointA =0;
    int pointB=0;
    vector<int> ans;
    while(pointA<A.size() && pointB<B.size()){
        if(A[pointA]==B[pointB]){
            ans.push_back(A[pointA]);
            pointA++;
            pointB++;
        }else {
            if(A[pointA]>B[pointB])
              pointB++;
            else
             pointA++;
        }
    }
    return ans;
}
