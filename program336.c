#include<stdio.h>
#include<stdbool.h>

// 7 8 9bit

typedef unsigned int UINT;

// 
//0000 0000 0000 0000 0000 0000 0000 0000
//0000 0000 0000 0000 0000 0001 1100 0000
// 0    0   0     0     0    1    c   0
//000001C0
//0X000001C0

bool CheakBit(UINT No)
{
    UINT iMast = 0X000001C0;
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
        printf("7,8,9 bit is on \n");
    }
    else
    {
         printf("7,8,9 bit is off \n");
    }
    
    return 0;
}
