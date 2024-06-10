#include<stdio.h>
int DivisibleByFive(int iNo)
{
    int iAns =0;
    iAns = iNo % 5;

    if(iAns == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
     int ivalue =0;
     int iRet = 0;
     printf("Enter number : \n");
     scanf("%d",&ivalue);


     iRet = DivisibleByFive(ivalue);
     if(iRet == 0)
     {
        printf("%d is not Divisible by 5 \n",ivalue);
     }
     else
     {
        printf("%d is  Divisible by 5 \n",ivalue);
     }



    return 0;
}