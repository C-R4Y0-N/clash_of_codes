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
    float time;
    cin >> time; 
    float speed;
    cin >> speed; 
    time=(time/60)*speed;
    cout<<time;
}