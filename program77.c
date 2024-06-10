#include<stdio.h>
#include<stdlib.h>

void DisplayCountEvenOddSum(int Arr[],int iSize)
{
    int iCnt = 0, iEvenCnt = 0,iEvenSum =0, iOddcnt = 0,iOddSum = 0;
    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iEvenSum = iEvenSum + Arr[iCnt++];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt++];
        }
        
    }
    printf("Number of even element are :%d\n",iEvenCnt);
    printf("Number of odd element ara :%d\n",iOddcnt);
    
    
}


int main()
{
    int *ptr = NULL;
    int ilength = 0, i = 0;
    

    printf("Enter the number of elements : \n");
    scanf("%d",&ilength);

    ptr = (int *)malloc(ilength * sizeof(int));

    printf(" enter the elements : \n");
    for (i = 0; i < ilength; i++)
    {
        scanf("%d",&ptr[i]);
    }

     DisplayCountEvenOddSum(ptr,ilength);
    
    free(ptr);

    return 0;

}