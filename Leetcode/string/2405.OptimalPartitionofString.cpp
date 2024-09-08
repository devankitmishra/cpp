class Solution {
public:
    int partitionString(string s) {
        ios::sync_with_stdio(0);
        vector<int> lastSeen(26, -1);
        int cnt = 0;
        int startSubstr = 0;
        for(int i = 0; i < s.size(); i++){
            char ch = s[i];
            if(lastSeen[ch-'a'] >= startSubstr){
                cnt++;
                startSubstr = i;
            }
            lastSeen[ch-'a'] = i;
        }
        return ++cnt;
    }
};