#include<iostream>
using namespace std;

template <class T>
T Addition(T Arr[],int iSize)
{
    int icnt = 0; T Sum = 0;
    
    for(icnt = 0; icnt < iSize; icnt ++)
    {
        Sum = Sum + Arr[icnt];
    }
    return Sum;

}
int main()
{
    int Data[]={10,20,30,40};

    int iRet = Addition(Data,4);

    cout<<"Addition of integer : "<<iRet<<"\n";
    
     float Dataf[]={10.2,20.3,30.4,40.5};

    float fRet = Addition(Dataf,4);

    cout<<"Addition of float : "<<fRet<<"\n";


    return 0;
}