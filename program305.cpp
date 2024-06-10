#include<iostream>
using namespace std;

void Swap(int x,int y)
{
    int temp;

    temp = x;
    x =y;
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

    return 0;
}