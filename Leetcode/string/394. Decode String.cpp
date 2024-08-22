class Solution {
public:
    string decodeString(string s) {
        stack<int> num;
        stack<string> str;
        int k = 0;
        for(char c : s){
            if(isdigit(c)){
                k = (k*10)+(c-'0');
                continue;
            }
            if(c=='['){
                num.push(k);
                k = 0;
                str.push(string(1,c));
                continue;
            }
            if(c != ']'){
                str.push(string(1,c));
                continue;
            }

            string temp;
            while(str.top() != "["){
                temp = str.top()+temp;
                str.pop();
            }
            str.pop();// to remove "["

            string replace; // get the new string
            for(int i = 0; i<num.top(); i++){
                replace += temp;
            }
            num.pop();

            str.push(replace); //push new sting into the stack
        }

        string ans;
        while(!str.empty()){
            ans = str.top() + ans;
            str.pop();
        }
        return ans;

    }
};