int solve(int* a, int n1) {
    int temp,i,j,position;
    for(i=0;i<n1-1;i++){
        position=i;
        for(j=i+1;j<n1;j++){
            if(a[position]>a[j]){
                position=j;
            }
        }
        if(position!=i){
            temp=a[i];
            a[i]=a[position];
            a[position]=temp;
        }
    }
    return a[0]+a[n1-1];
}