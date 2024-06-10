#include<stdio.h>

typedef unsigned int UINT;

int CountOnBist(UINT No)
{
    int iCnt = 0;
    int Digti = 0;

    while(No != 0)
    {
        Digti = No % 2;
        iCnt = iCnt + Digti;
        No = No / 2;
    }
    return iCnt;

}

int main()
{
    UINT Value = 0;
    int Ret = 0;

    printf("Enter number : \n");
    scanf("%d",&Value);
    
    Ret = CountOnBist(Value);

    printf("Number of bit which are On are : %d\n",Ret);
    
    return 0;
}
