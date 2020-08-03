class Solution {
public:
    int largestRectangleArea(vector<int>& A) {
        if(A.size()==0)
            return 0;
        int top;
        stack<int> s;
        int maxArea=INT_MIN;
        int area;
        int i=0;
        while(i<A.size()){
            if(s.empty() || A[s.top()]<A[i]){
                s.push(i);
                i++;
            }
            else{
                top=s.top();
                s.pop();
                area = A[top]*(s.empty() ? i : i-1-s.top());
                if(maxArea<area)
                    maxArea = area;
            }
            
        }
        
        while(!s.empty()){
            top=s.top();
            s.pop();
            area = A[top]*(s.empty() ? i : i-s.top()-1);
            if(maxArea<area)
                maxArea=area;
        }
        return maxArea;
    }
};
