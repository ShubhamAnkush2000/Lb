#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT No)
{
    UINT iMask = 0X0F0F0F0F;
    UINT iAns = 0;

    iAns = No ^ iMask;

    return iAns;
    

}

int main()
{
    UINT Value = 0;
    UINT iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&Value);

    iRet = ToggleBit(Value);

    printf("Updata number is : %d\n",iRet);

    
    return 0;
}
