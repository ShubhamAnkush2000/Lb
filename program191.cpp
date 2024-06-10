#include<iostream>
using namespace std;

class Number
{
    public :
    int iNo;

    Number(int i)
    {
        iNo = i;
    }
    int Factorial()
    {
        int iFact = 1;
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iFact = iFact * iCnt;
        }
         return iFact; 
    }

};

int main()
{
    int iValue,iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    Number obj(iValue);

    iRet = obj.Factorial();

    cout<<"Factorial is : "<<iRet;
    
    return 0;
}
