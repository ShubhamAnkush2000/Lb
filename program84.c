#include<stdio.h>
#include<stdlib.h>

void DisplayReverse(int Arr [ ],int iSize)
{
    int iCnt = 0;
    for(iCnt = iSize-1; iCnt >=0;iCnt--)
    {
        printf("%d\n",Arr[iCnt]);
    }
}


int main()
{
    int *ptr = NULL;
    int ilength = 0, i = 0;

    printf("Enter number of element : \n");
    scanf("%d",&ilength);

    ptr =(int *)malloc(sizeof(int)* ilength);
    printf("enter the element : \n");
    for(i = 0; i < ilength; i++)
    {
        scanf("%d",&ptr[i]);
    }
     DisplayReverse(ptr,ilength);
    printf("Minimum number is : %d\n");

    free(ptr);

    return 0;
}