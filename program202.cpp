#include<iostream>
using namespace std;

class ArrayX
{
    public:
    int * Arr;
    int iSize;

    ArrayX(int i)
    {
          cout<<"allocating the memory of resource.."<<"\n";
        iSize = i;
        Arr = new int [iSize];
    }
    ~ArrayX()
    {
          cout<<"Deallocating the memory of resource.."<<"\n";
        delete []Arr;
    }
    void Accept()
    {
        cout<<"Enter the elements of array :"<<"\n";
        for(int iCnt = 0;iCnt< iSize;iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }
    void Display()
    {
        cout<<" elements of array Arr :"<<"\n";
        for(int iCnt = 0;iCnt< iSize;iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";
        }
        cout<<"\n";
    }
    
};
class MarvellousLB : public ArrayX
{
    public:
    
    int Minimum()
    {
        int iMin = Arr[0];

        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(Arr[iCnt]<iMin)
            {
                iMin = Arr[iCnt];
            }
        }
        return iMin;
    }

};

int main()
{
    int iLength = 0;
    int iRet = 0;

    cout<<"Enter the size of array :"<<"\n";
    cin>>iLength;
    
    

    return 0;
}