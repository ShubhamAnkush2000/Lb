#include<stdio.h>
#include<stdlib.h>

void DisplayCountEvenOdd(int Arr[],int iSize)
{
    int iCnt = 0, iEvenCnt = 0;
    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iEvenCnt++;
        }
        
    }
    printf("Number of even element are :%d\n"iEvenCnt);
    printf("Number of odd element ara :%d\n",iSize-iEvenCnt);
    
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

     DisplayCountEvenOdd(ptr,ilength);
    


    free(ptr);

    return 0;


}