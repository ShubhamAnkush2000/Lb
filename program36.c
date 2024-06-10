#include<stdio.h>

void DisplayNonFactors(int iNo)
{
    int iCnt = 0;
    printf("Non Factor of  15 are \n",iNo);
    for (iCnt = 1;iCnt <iNo;iCnt++)
    {
       if ( (iNo % iCnt)!=0)
       {
        printf("%d\n",iCnt);
       }
    }

}
int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    DisplayNonFactors(iValue);



    return 0;
}