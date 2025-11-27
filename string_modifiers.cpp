#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "hello world";
    // s[5] = 'A'; // avabe memory expend kore na
    // s += s2;
    // s.append(s2);
    // s.push_back('a');
    // s += 'b';
    // s.pop_back();
    // s = "gello";
    // s.assign("Gello");
    // s.erase(5,2);
    // s.replace(6,0,"Bangladesh "); //index number, koyta remove korbo, ki replace korbe
    s.insert(5,"arfin");
    cout << s << endl;
    return 0;
}