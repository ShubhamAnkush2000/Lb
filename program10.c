#include<stdio.h>
#include<stdbool.h>
bool DivisibleByFive(int iNo)
{
    int iAns =0;
    iAns = iNo % 5;

    if(iAns == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
     int ivalue =0;
     bool bRet = 0;
     printf("Enter number : \n");
     scanf("%d",&ivalue);


     bRet = DivisibleByFive(ivalue);
     if(bRet == 0)
     {
        printf("%d is not Divisible by 5 \n",ivalue);
     }
     else
     {
        printf("%d is  Divisible by 5 \n",ivalue);
     }



    return 0;
}    