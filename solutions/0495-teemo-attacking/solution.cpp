class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int attack, next,gap;
        int ans = 0;
        for(int i = 0; i<timeSeries.size()-1;i++){
            attack  = timeSeries[i];
            next = timeSeries[i+1];
            gap = next - attack;
            ans+= min(gap,duration);
        }
        ans += duration;
        return ans;
    }
};
