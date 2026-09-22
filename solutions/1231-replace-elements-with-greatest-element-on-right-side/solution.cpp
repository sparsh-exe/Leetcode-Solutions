class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size()-1;
        int m = -1;
        for(int i = n; i>=0; i--) {
            int c = arr[i];
            arr[i] = m;
            m = max(m, c);
        }
        return arr;
    }
};
