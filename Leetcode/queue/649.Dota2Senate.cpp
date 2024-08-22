class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> radiant, dire;
        int n = senate.size();
        
        // Fill queues with the indices of 'R' and 'D'
        for (int i = 0; i < n; ++i) {
            if (senate[i] == 'R') radiant.push(i);
            else dire.push(i);
        }
        
        // Process the queues
        while (!radiant.empty() && !dire.empty()) {
            int rIndex = radiant.front();
            int dIndex = dire.front();
            radiant.pop();
            dire.pop();
            
            if (rIndex < dIndex) {
                // Radiant bans Dire
                radiant.push(rIndex + n);
            } else {
                // Dire bans Radiant
                dire.push(dIndex + n);
            }
        }
        
        return radiant.empty() ? "Dire" : "Radiant";
    }
};