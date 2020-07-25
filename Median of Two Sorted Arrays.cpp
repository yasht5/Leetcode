Class Solution{
public:
  double findMedianSortedArrays(vector<int> &A, vector<int> &B){
    int n=A.size();
    int m=B.size();
    if(n>m){
      vector<int> temp(A);
      A=B;
      B=temp;
      int t=n;
      n=m;
      m=t;
    }
    int iMin=0, iMax=n, half = (n+m+1)/2;
    int i = (iMin+iMax)/2;
    int j = half-j;
    while(iMin<=iMax){
      if(i<iMax && B[j-1]>A[i])
         iMin=i+1;
      else if(i>iMin && A[i-1]>B[j])
         iMax = i-1;
      else{
        int maxLeft=0;
        if(i==0)
          maxLeft = B[j-1];
        else if(j==0)
          maxLeft = A[i-1];
        else
          maxLeft = min(A[i-1], B[j-1]);
        if((m+n)%2==1)
          return maxLeft;
        int minRight=0;
        if(i==n)
          minRight = B[j];
        else if(j==m)
          minRight = A[i];
        else
          minRight = min(A[i], B[j]);
        return (maxLeft+maxRight)/2.0;
      }
    }
    return 0.0;
  }
};
