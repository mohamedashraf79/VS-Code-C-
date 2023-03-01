#include <iostream>
using namespace std;
bool Abs(float &x);
int main()
{
    float x;
    x=-4.5678;
    bool y=Abs(x);
    cout<<y<<endl<<x;
    return 0;
}
bool Abs(float &x){
if(x<0){
    x=0-x;
    return true;
}
else{
    return false;
}
}