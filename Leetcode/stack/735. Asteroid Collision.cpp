class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stack;
        for(int asteroid : asteroids){
            if(stack.empty() || asteroid > 0){
                stack.push(asteroid);
            }
            else{
                while(!stack.empty()){
                    if(stack.top() < 0){
                        stack.push(asteroid);
                        break;
                    }
                    if(abs(asteroid) == stack.top()){
                        stack.pop();
                        break;
                    }
                    else if(abs(asteroid) < stack.top()){
                        break;
                    }
                    else{
                        stack.pop();
                        if(stack.empty()){
                            stack.push(asteroid);
                            break;
                        }
                    }
                }
            }
        }

        vector<int> ans(stack.size());
        for(int i = stack.size()-1; i >= 0; i--){
            ans[i] = stack.top();
            stack.pop();
        }
        return ans;
            
    }
};