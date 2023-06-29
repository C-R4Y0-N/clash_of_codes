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
    int n,sum;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int xi;
        cin >> xi;
        sum=(xi*xi)+sum;
    }
    cout<<sum;

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

}