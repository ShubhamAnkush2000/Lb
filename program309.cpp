#include<iostream>
using namespace std;

template <class T>
void Swap(T &x,T &y)
{
    T temp;

    temp = x;
    x = y;
    y = temp;

}
int main()
{
    int a = 10,b = 11;
    cout<<"value of a"<<a<<"\n";
    cout<<"value of b"<<b<<"\n";
    Swap(a,b);

    cout<<"value of a"<<a<<"\n";
    cout<<"value of b"<<b<<"\n";

    double p = 10.7,q = 11.9;
    cout<<"value of p"<<p<<"\n";
    cout<<"value of q"<<q<<"\n";
    Swap(p,q);
    
    cout<<"value of p"<<p<<"\n";
    cout<<"value of q"<<q<<"\n";


    return 0;
}