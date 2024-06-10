#include<iostream>
using namespace std;

void Display(int Arr[],int iSize)
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


    return 0;
}