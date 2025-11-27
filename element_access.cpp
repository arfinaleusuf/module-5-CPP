#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>> s;
    cout << s[1] << endl;
    cout << s.at(0) << endl;
    cout << s.back() << endl;
    cout << s[s.size()-1] << endl; // olternative of back function
    cout << s.front() << endl; // olternative is s[0]
    return 0;
}