#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No, UINT Pos)
{
    UINT iMask = 0X00000001;
    UINT Result = 0;

    if((Pos< 1) || (Pos > 32))
    {
        printf("Invalid position ,it should bettween 1 to 32 \n");
        return false;
    }
    iMask = iMask << (Pos -1); 
    Result = No & iMask;

    if(Result == iMask)
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
    UINT Position = 0;
    bool bRet = false;
    
    printf("Enter number : \n");
    scanf("%d",&Value);

    printf("Enter the position of bit\n");
    scanf("%d",&Position);

    bRet = CheckBit(Value,Position);
    
    if(bRet == true)
    {
        printf("Bit at the postion %d is no\n",Position);
    }
    else
    {
        printf("Bit at the postion %d is off\n",Position);    
    }
   
    return 0;
}