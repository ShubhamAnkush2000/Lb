#include<stdio.h>

void DisplayR()
{
     int iCnt = 0;

    if (iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
        DisplayR();
    }
}
int main()
{
    printf("inside main\n");

    DisplayR();

    printf("End of main\n");
    
    return 0;
}/