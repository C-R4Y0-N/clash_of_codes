#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n,FIDE;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int e;
        cin>>e;
        FIDE=(e*7.5)+700;
        cout<<FIDE<<endl;
    }
}