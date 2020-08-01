class Solution {
public:
    vector<int> searchRange(vector<int>& A, int target) {
        vector<int> res(2, -1);
        int left = bsearch(A, target, true);
        
        if(left==A.size() || A[left]!=target)
            return res;
        res[0]=left;
        res[1]=bsearch(A, target, false)-1;
        return res;
    }
private:
    int bsearch(vector<int>&A, int key, bool k){
        int l=0;
        int h=A.size();
        while(l<h){
            int mid=(l+h)/2;
            if(A[mid]>key || (k && key==A[mid]))
                h=mid;
            else
                l=mid+1;
        }
        return l;
    }
};
