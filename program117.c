#include<stdio.h>

void Display(int iRow, int icol)
{
    int i = 0, j = 0;
    
    
    for(i = 1;i <= iRow;i++)
    {
        for(j = 1; j <= icol; j++)
        {
            
            if((j==1)|| (j == icol))
            {
                printf("#\t");
            }
            else
            {
                printf("$\t");

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

