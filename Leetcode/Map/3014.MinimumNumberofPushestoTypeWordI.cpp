class Solution {
public:
    int minimumPushes(string word) {
        int ans = 0;
        map<int, int> m;

        int key = 2;

        for(char ch:word){
            if(key>9){
                key  = 2;
            }
            m[key]++;
            ans+=m[key];
            key++;
        }
        return ans;
    }
};