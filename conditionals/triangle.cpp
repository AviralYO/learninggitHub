#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the value for a";
    cin>>a;
    cout<<"enter the value for b";
    cin>>b;
    cout<<"enter the value for c";
    cin>>c;
    if(a+b>c || b+c>a || c+a>b)
    cout<<"it is a valid triangle with the sides given";
    else
    cout<<"it is not a valid triangle";

}
