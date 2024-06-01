    int nuswap=0;
    bool swapped=false;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                nuswap++;
                swapped=true;
            }
        }
        if(!swapped){
            break;
        }
    }
    cout<<"Array is sorted in "<<nuswap<<" swaps."<<endl;
    cout<<"First Element:"<<" "<< a.front()<<endl;
    cout<<"Last Element:"<<" "<<a.back()<<endl;

    return 0;
}
