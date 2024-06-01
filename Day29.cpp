int bitwiseAnd(int N, int K) {
    int maxi=INT_MIN;
    for(int i=1;i<=N;i++){
        for(int j=i+1;j<=N;j++){
            int a=i&j;
            if(a<K){
            maxi=max(maxi,a);
            }

        }
        
    }
    return maxi;

}
