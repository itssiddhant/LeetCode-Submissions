class Solution {
public:
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
    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<int> hist(matrix[0].size(),0);
        int maxi = INT_MIN;
        for(int i =0; i<matrix.size() ;i++){
            for(int j = 0; j<hist.size();j++){
                if(matrix[i][j]=='1'){
                    hist[j]++;
                }
                else{
                    hist[j]=0;
                }
            }
            maxi = max(maxi,largestRectangleArea(hist));
        }
        return maxi;
    }
};