#include<stdio.h>

void D#isplay(int iRow, int icol)
{
    int i = 0, j = 0;
    if(iRow != icol)
    {
        printf("Row number and colmn number are diffrent\n");
        return;
    }
    
    for(i = 1;i <= iRow;i++)
    {
        for(j = 1; j <= icol; j++)
        {
            if(i <= j)
            {
                printf("&\t");
            }
            else
            {
                printf("*\t");
            }

        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("enter the of row \n");
    scanf("%d",&iValue1);

    printf("enter the of columns \n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}