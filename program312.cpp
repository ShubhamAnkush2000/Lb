#include<iostream>
using namespace std;

template <class T>
void Display(T Arr[],int iSize)
{
    int icnt = 0;
    for(icnt = 0; icnt < iSize; icnt ++)
    {
        cout<<Arr[icnt]<<"\n";
    }

}

int main()
{
    int Data[]={10,20,30,40};

    Display(Data,4);

    char Datac[]={'a','b','c','d','e'};

    Display(Datac,5);


    return 0;
}