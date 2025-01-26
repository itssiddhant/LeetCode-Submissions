class Solution {
private:
    vector<int> nextSmallerElement(vector<int>&arr, int n){
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);

        for(int i =n-1 ; i>=0 ;i--){
            int ch = arr[i];
            while(st.top()!=-1 && arr[st.top()]>=ch){
                st.pop();
            }
            ans[i]= st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> prevSmallerElement(vector<int>&arr, int n){
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);

        for(int i =0 ; i<n ;i++){
            int ch = arr[i];
            while(st.top()!=-1 && arr[st.top()]>=ch){
                st.pop();
            }
            ans[i]= st.top();
            st.push(i);
        }
        return ans;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector<int> next(n);
        next= nextSmallerElement(heights,n);
        
        vector<int> prev(n);
        prev= prevSmallerElement(heights,n);

        int area =0;

        for(int i =0; i<n; i++){
            int l = heights[i];
            if(next[i]==-1){
                next[i]=n;
            }
            int b = next[i] - prev[i] -1;

            int newArea = l*b;

            area = max(newArea,area);
        }
        return area;
    }
};