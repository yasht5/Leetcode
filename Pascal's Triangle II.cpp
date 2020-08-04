vector<int> res(n+1);
    vector<vector<int>> temp(n+1);
    if(n==0){
        res[0]=1;
        return res;
    }
    temp[0].push_back(1);
    for(int i=1;i<=n;i++){
        temp[i].resize(i+1);
        temp[i][0]=1;
        temp[i][i]=1;
        int k=0;
        for(int j=1;j<i; j++){
            temp[i][j]=temp[i-1][k]+temp[i-1][k+1];
            k++;
        }
    }
    for(int i=0;i<=n;i++){
        res[i]=temp[n][i];
    }
    return res;
