#include <iostream>
using namespace std;
void absneg(int a[],int n,int *p1,int *p2);
int main () {
    int a[10],i,c=0,s=0;
    absneg(a,10,&s,&c);
    cout<<"Array after Call = ";
    for(i=0;i<10;i++){
        cout <<a[i] <<" ";
    }
    cout<<endl <<"Count of Negatives = "<<c<<endl<<"Sum of Negatives = "<<s<<endl;
    return 0;
}
void absneg(int a[],int n,int *p1,int *p2){
    int i;
    for(i=0;i<10;i++){
        cin>>a[i];
        if(a[i]<0){
            *p1+=a[i];
            (*p2)++;
            a[i]=--a[i];
        }
    }

}