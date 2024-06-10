#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheakNumber(int Arr[],int iSize,int iNo)
{
    int iCnt = 0;
    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]== iNo)
        {
            break;
        }   
    }
    if(iCnt == iSize)
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
    int *ptr = NULL;
    int ilength = 0, iValue = 0,i = 0,bRet = false;
    

    printf("Enter the number of elements : \n");
    scanf("%d",&ilength);
    printf("Enter the elements : \n");
    

    ptr = (int *)malloc(ilength * sizeof(int));

    for (i = 0; i < ilength; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Enter the element to Findout the Occured : \n");
    scanf("%d",&iValue);

     bRet = CheakNumber(ptr,ilength,iValue);
    if(bRet == true)
    {
        printf("%d is occured in the arrya\n",iValue);
    }
    else
    {
        printf("there is no %d in the array\n",iValue);
    }
    free(ptr);

    return 0;

}