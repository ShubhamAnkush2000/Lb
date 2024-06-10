#include<stdio.h>

typedef unsigned int UINT;

//0000 0000 0000 0000 0000 0000 0000 0000
//1111 1111 1111 1111 1111 1111 1111 0111
// f    f   f     f     f    f    f   7
//fffffff7
//0XFFFFFFF7


UINT ToggleBit(UINT No)
{
    UINT iMask = 0X00000008;
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
