#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string code;
        cin >> code;
        int len = code.length();
        int count = 0;
        stack<char> st;
        for (int j = 0; j < len; j++)
        {
            if (code[j] == '<')
                st.push(code[j]);
            else if (code[j] == '>')
            {
                if(st.empty()==true||st.top()=='>')
                {
                   break;
                }
                else if (st.top() == '<')
                {
                    st.pop();
                    count += 2;
                }
               
            }  
        }
         if(st.empty()==false)count=0;
        cout<<count<<endl;
    }
    return 0;
}