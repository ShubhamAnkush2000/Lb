#include<stdio.h>
#include<stdlib.h>
// float Avarage(int*Arr,int iSize)
float Average(int Arr[],int iSize)
{
    int iSum = 0, iCnt = 0;
    for(iCnt = 0;iCnt < iSize ; iCnt ++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return (iSum/iSize);
} 

int main()
{
    int *ptr = NULL;
    int ilength = 0, i = 0;
    float fRet = 0.0f;

    printf("Enter the number of elements : \n");
    scanf("%d",&ilength);

    ptr = (int *)malloc(ilength * sizeof(int));

    printf("Please enter the number : \n");
    for (i = 0; i < ilength; i++)
    {
        scanf("%d",&ptr[i]);
    }
    fRet = Average(ptr,ilength);
    printf("Average is : %f\n",fRet);

    free(ptr);

    return 0;

}