class Solution {
public:
    int firstMissingPositive(vector<int>& A) {
        int j=0;
        for(int i=0;i<A.size();i++){
            if(A[i]<=0){
                swap(A[i], A[j]);
                j++;
            }
        }
        A.erase(A.begin(), A.begin()+j);
        for(int i=0;i<A.size();i++){
            if(abs(A[i])-1<A.size() && A[abs(A[i])-1]>0)
                A[abs(A[i])-1] = -A[abs(A[i])-1];
        }
        for(int i=0;i<A.size();i++){
            if(A[i]>0)
                return i+1;
        }
        return A.size()+1;
    }
};
