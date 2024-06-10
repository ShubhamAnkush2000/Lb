#include<stdio.h>
#include<stdbool.h>

bool IsCapitalX(char ch)
{
    if ((ch>='A') && (ch<='A'))
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
    bRet = IsCapitalX(cValue);
    if(bRet == true)
    {
        printf("%c is a Capital case leter\n",cValue);

    }
    else
    {
               printf("%c is not a Capital case leter\n",cValue);
    }

    return 0;
}