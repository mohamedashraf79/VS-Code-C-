#include <iostream>
#include <string.h>
using namespace std;
string GetFullname(string first, string second);
int main()
{
    string fn = "Ahmed", sn = "Mohamed";
    cout << GetFullname(fn, sn);
    return 0;
}
string GetFullname(string first, string second)
{
    string name;
    name = first + " " + second;
    return name;
}