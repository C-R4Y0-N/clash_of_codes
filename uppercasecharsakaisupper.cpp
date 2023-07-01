#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <cstring>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int aux;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(isupper(s[i]))
        {
            cout<<s[i];
            aux++;
        }
    }
    if(aux==0)
    {
        cout<<"None"<<endl;
    }
}