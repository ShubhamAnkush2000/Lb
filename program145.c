#include<stdio.h>
#include<stdbool.h>

bool Cheak(char *str,char ch)
{
    
    bool bFlag = false;

    while (*str != '\0')
    {
        if (*str == ch ) 
        {
            bFlag = true;
            break;
        }
        str++;

        
    }
    return bFlag;
}
int main()
{
    char Arr [20];
    char cValue = '\0';
    bool bRet = false;

    printf("please enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("please enter the character\n");
    scanf(" %c",&cValue);

    bRet = Cheak(Arr,cValue);
    if (bRet == true)
    {
        printf("character is present in the string\n");
    }
    else
    {
                printf("character is  not present in the string\n");
    }
        return 0;

}