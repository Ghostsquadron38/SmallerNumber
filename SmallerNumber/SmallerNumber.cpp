#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter a: "; cin>>a;
    cout<<"Enter b: "; cin>>b;
    if (a>b)
        cout<<"The smaller number is "<<b<<endl;
    else if (a<b)
        cout<<"The smaller number is "<<a<<endl;
    else
        cout<<"Cuz a=b so there is no smaller number."<<endl;
    return 0;
}
