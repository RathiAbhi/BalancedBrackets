#include <bits/stdc++.h>
using namespace std;

bool compare(char b, char c){
    if(b=='{' && c=='}')
        return true;
    else if(b=='[' && c==']')
        return true;
    else if(b=='(' && c==')')
        return true;
        
     return false;
}

bool checkBalanced(string x)
{
    stack<char> s;
    for(int i=0;i<x.size();i++)
    {
        if(x[i]=='[' || x[i]=='{' || x[i]=='(')
            s.push(x[i]);
        else if(x[i]==']' || x[i]=='}' || x[i]==')')
        {
            if(s.empty() || !compare(s.top(),x[i]))
                return false;
            else
                s.pop();
        }
    }
    if(s.empty())
        return true;
    else
        return false;
}

int main()
{
   int n;
   string a;
   cin>>n;
   while(n--)
   {
       cin>>a;
       if(checkBalanced(a))
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
   }
}