int Solution::majorityElement(const vector<int> &A) {
    if(A.size()==1){
        return A[0];
    }
    vector<int>B(A);
    sort(B.begin(),B.end());
    int m=0;
    int count=0;
    int x=B[0];
    for(auto i=1;i<B.size();i++){
        if(B[i]==B[i-1]){
            count++;
            if(count>m){
                m=count;
                x=B[i];
            }
        }
        else{
            count=0;
        }
    }
    return x;
}
