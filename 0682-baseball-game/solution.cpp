class Solution {
public:
    int calPoints(vector<string>& x) {
        stack<int> st;
        for(string c: x){
            if(c=="C")
                st.pop();
            else if(c=="D")
                st.push(2*st.top());
            else if(c == "+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                b+=a;
                st.push(a);
                st.push(b);
            }
            else
                st.push(stoi(c));
        }
        int ans = 0;
        while(!st.empty()){
            ans+= st.top();
            st.pop();
        }
        return ans;
    }
};
