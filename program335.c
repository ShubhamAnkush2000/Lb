#include<stdio.h>
#include<stdbool.h>

// 12bit

typedef unsigned int UINT;

// 
//0000 0000 0000 0000 0000 0000 0000 0000
// 0    0   0     0     0    8    0    0
//00000800
//0X00000800

bool CheakBit(UINT No)
{
    UINT iMast = 0X00000800;
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
        printf("12 bit is on \n");
    }
    else
    {
         printf("12 bit is off \n");
    }
    
    return 0;
}
