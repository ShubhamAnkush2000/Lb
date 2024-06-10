#include<stdio.h>
#include<stdlib.h>

int CalculateFrequency(int Arr[],int iSize,int iNo)
{
    int iCnt = 0,iFrequency = 0;
    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]== iNo)
        {
            iFrequency++;
        }
       
        
    }
   return iFrequency;
    
}


int main()
{
    int *ptr = NULL;
    int ilength = 0, iValue = 0,i = 0,iRet = 0;
    

    printf("Enter the number of elements : \n");
    scanf("%d",&ilength);
    printf("Enter the elements : \n");
    

    ptr = (int *)malloc(ilength * sizeof(int));

    for (i = 0; i < ilength; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Enter the element to Findout the frequency : \n");
    scanf("%d",&iValue);

     iRet = CalculateFrequency(ptr,ilength,iValue);
    printf("Frequency of %d is %d\n",iValue,iRet);
    free(ptr);

    return 0;

}