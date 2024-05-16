class Solution {
public:
    int freq1[26];
    int freq2[26];

    bool isSame(){
        for(int i=0;i<26;i++)
            if(freq1[i] != freq2[i])
                return false;
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int m = s1.size();
        int n = s2.size();

        if(m>n)
            return false;

        for(int i = 0; i<m; i++)
        {
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;
        }
        
        if(isSame())
            return true;
        
        for(int i=m; i<n; i++)
        {
            freq2[s2[i]-'a']++;
            freq2[s2[i-m]-'a']--;
            if(isSame())
                return true;
        }
        return false;
        
    }
};