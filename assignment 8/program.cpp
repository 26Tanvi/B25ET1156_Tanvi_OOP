#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"enter two number";
    cin>>a;
    cin>>b;
    try
    {
        if(b==0)
        {throw b;}
        c=a/b;
        cout<<"\n the division result";
        cout<<"\t"<<c;
    }
        catch (int x)
        {
            cout<<" denomentaor cannot be zero";
            cout<<"divide by "<<x;
        }
    
    cout<<"\nat the end of main function.";
    return 0;
}
