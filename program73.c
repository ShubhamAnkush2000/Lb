#include<stdio.h>
#include<stdlib.h>


_____ ________(int Arr[],int iSize)
{
    

}


int main()
{
    int *ptr = NULL;
    int ilength = 0, i = 0;
    int iRet = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&ilength);

    ptr = (int *)malloc(ilength * sizeof(int));

    printf(" enter the elements : \n");
    for (i = 0; i < ilength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    ______ = ___________ (ptr,ilength);
    

    free(ptr);

    return 0;


}