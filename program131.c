#include<stdio.h>
#include<stdbool.h>

bool IsDigitX(char ch)
{
    if ((ch>= 48) && (ch<= 57))
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    char cValue = '\0';
    bool bRet = false;
    printf("please enter one character\n");
    scanf("%c",&cValue);
    bRet = IsDigitX(cValue);
    if(bRet == true)
    {
        printf("%c is a Digit case leter\n",cValue);

    }
    else
    {
               printf("%c is not a Digit case leter\n",cValue);
    }

    return 0;
}