class Solution {
    public:
        int evalRPN(vector<string>& tokens) {
            stack<int>s;
            for(auto u:tokens){
                if(u=="+"){
                    int x=s.top();
                    s.pop();
                    int y=s.top();
                    s.pop();
                    s.push(x+y);
                }
                else if(u=="*"){
                    int x=s.top();
                    s.pop();
                    int y=s.top();
                    s.pop();
                    s.push(x*y);
                }
                else if(u=="-"){
                    int x=s.top();
                    s.pop();
                    int y=s.top();
                    s.pop();
                    s.push(y-x);
                }
                else if(u=="/"){
                    int x=s.top();
                    s.pop();
                    int y=s.top();
                    s.pop();
                    s.push(y/x);
                }
                else{
                    s.push(stoi(u));
                }
            }
            return s.top();
        }
    };