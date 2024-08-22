class Solution {
public:
    int minimumPushes(string word) {
        ios::sync_with_stdio(0);
        vector<int> mp(26,0);
        for(char ch:word){
            mp[ch-'a']++;
        }
        sort(begin(mp),end(mp),greater<int>()); //decending order of frequency

        int ans = 0;
        for(int i = 0; i < 26; i++){
            int freq = mp[i];
            int press = i/8 + 1;
            ans += press * freq;
        }
        return ans;

    }
};