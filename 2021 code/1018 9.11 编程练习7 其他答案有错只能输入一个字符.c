// 9.7
#include<stdio.h>
//#include<ctype.h>
int letter_location(char ch);

int main(void)
{
    char ch;
    int res;

    printf("Enter a character: ");
    while((ch = getchar()) != EOF){ 
        // ch = getchar();
        // res = letter_location(ch);
        if(-1 == (res = letter_location(ch)))
            printf("%c is not a letter.\n", ch);
        else
            printf("%c: %d\n", ch, res + 1);
        printf("Enter a character: ");
        while(getchar() != '\n')
            continue;
    }

}

int letter_location(char ch)
{
    int ans;

    if(ch >= 'a' && ch <= 'z' )
        ans = ch - 'a';
    else if(ch >= 'A' && ch <= 'Z')
        ans = ch - 'A';
    else
        ans = -1;

    return ans;
}

//或者直接用 ctype.h 函数
// int letter_location(char ch)
// {
//     int ans;

//     if(isalpha(ch))
//         ans = tolower(ch) - 'a' + 1;
//     else 
//         ans = -1;
//     return ans;
// }
