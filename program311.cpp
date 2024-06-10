#include<iostream>
using namespace std;

template <class T>
void Display(T Arr[],int iSize)
{
    T icnt = 0;
    for(icnt = 0; icnt < iSize; icnt ++)
    {
        cout<<Arr[icnt]<<"\n";
    }

}

int main()
{
    int Data[]={10,20,30,40};

    Display(Data,4);

    return 0;
}