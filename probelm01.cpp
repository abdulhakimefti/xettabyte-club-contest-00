#include <bits/stdc++.h>
using namespace std;

int main()
{   
    ifstream in;
    string s, t;
    in.open("your-text-input-file.txt");
    bool is_encoded = false;
    while (in.eof()==0)
    {  
        in >> s >> t;
        int idx = 0;
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = idx; j < t.length(); j++)
            {
                if (s[i] == t[j])
                {
                    is_encoded = true;
                    break;
                }
                else
                {
                    is_encoded=false;
               
                }
                idx++;
            }
            if(is_encoded==false)break;
        }
        if (is_encoded == true)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    in.close();
    return 0;
}
