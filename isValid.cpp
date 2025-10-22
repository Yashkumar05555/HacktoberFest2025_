class Solution {
public:
    bool isValid(string s) {
        stack<char>a;
        if(s.size()==1){return false ;}
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                a.push(s[i]);
            }
             else if(s[i]==')'||s[i]==']'||s[i]=='}'){
                if(a.empty()){return false;}

               if(s[i]==')'){
                if(a.top()=='('){
                    a.pop();
                }else{
                    return false;
                }
               }
               if(s[i]=='}'){
                if(a.top()=='{'){
                    a.pop();
                }else{
                    return false;
                }
               }

               if(s[i]==']'){
                if(a.top()=='['){
                    a.pop();
                }else{
                    return false;
                }
               }
               }
             }
           
   if(a.empty()){return true;}
        return false;;
    }
};
