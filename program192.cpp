#include<iostream>
using namespace std;

class ArrayX
{
    public:
      int * Arr;
      int iSize;

    ArrayX(int i)
    {
        iSize = i;
        Arr = new int [iSize];
    }
    void Accept()
    {
        cout<<"please enter the number : "<<"\n";
        int iCnt =0;
        for(iCnt = 0; iCnt < iSize ; iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }
     void Display()
    {
        cout<<"Element of Array are : "<<"\n";
        int iCnt =0;
        for(iCnt = 0; iCnt < iSize ; iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";
        }
        cout<<"\n";
    }
};
int main()
{
    int iLength = 0;

    cout<<"enter the number of elements : "<<"\n";
    cin>>iLength;

    ArrayX obj(iLength);

    obj.Accept();
    obj.Display();

    return 0;
}
