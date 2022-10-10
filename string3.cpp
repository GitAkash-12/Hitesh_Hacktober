#include <stdio.h>
#include <string.h>
int main()
{
    printf("Enter the string\n");
    char s[100];
    scanf("%[^\n]s", s);
    int c,i,k=0;
    k = strlen(s);
    for(i=0;i<k;i++)
    {
        char ch = s[i];
        int c = (int)(ch);
        if(c>=65 && c<=90)
        {
            s[i] = (char)(c+32);
        }
    }
    printf("%s", s);
    getch();
    return 0;
}
