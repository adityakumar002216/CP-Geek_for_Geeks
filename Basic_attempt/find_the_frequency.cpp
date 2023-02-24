int findFrequency(vector<int> v, int x){
    // Your code here
    int k=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==x)
        k++;
    }
    return k;
}
