#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool CheakBit(UINT No)
{
    UINT iMast = 512;
    UINT Result = 0;

    Result = No & iMast;

    if(Result == iMast)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    UINT Value = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&Value);

    bRet = CheakBit(Value);
    if(bRet == true)
    {
        printf("10 bit is on \n");
    }
    else
    {
         printf("10 bit is off \n");
    }
    
    return 0;
}
