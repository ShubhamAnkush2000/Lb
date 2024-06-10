#include<iostream>
using namespace std;

template <class T>
T Maximum(T Arr[],int iSize)
{
    int icnt = 0; T Max = Arr[0];
    
    for(icnt = 0; icnt < iSize; icnt ++)
    {
        if(Arr[icnt]>Max)
        {
        Max =  Arr[icnt];
        }
    }
    return Max;

}
int main()
{
    int Data[]={10,20,30,40};

    int iRet = Maximum(Data,4);

    cout<<"Maximum of integer : "<<iRet<<"\n";
    
     float Dataf[]={10.2,20.3,30.4,40.5};

    float fRet = Maximum(Dataf,4);

    cout<<"Maximum of float : "<<fRet<<"\n";


    return 0;
}