class Solution {
public:
    string interpret(string command) {
        string s="";
    for(int i=0;i<command.size();i++)
    {
        if(command[i]=='G')
        {
            s=s+'G' ;
        }
       else if(command[i]=='('&& command[i+1]==')')
        {
            i=i+1;
            s=s+'o';
        }
        else
        { i=i+3;
            s=s+'a' ;
            s=s+'l';

        }
    }
    return s;
        
    }
};