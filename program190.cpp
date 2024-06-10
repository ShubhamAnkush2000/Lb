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
    void Function()
    {
        
    }

};

int main()
{
    int iValue;

    cout<<"Enter number : \n";
    cin>>iValue;

    Number obj(iValue);

    obj.Function();

    return 0;
}
