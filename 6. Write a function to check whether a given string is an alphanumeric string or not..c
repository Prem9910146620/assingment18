#include<string.h>
#include<stdio.h>
void alphanumeric();
int main()
{
    char a[150];
    printf("enter the character\n");
    fgets(a,150,stdin);
    alphanumeric(a);
    return 0;
}
void alphanumeric(char b[])
{
    int i,c=0,d=0;
    for(i=0;b[i]!='\0';i++)
    {
        if(b[i]>='a'&&b[i]<='z'||b[i]>='A'&&b[i]<='Z')
            c++;
        else
            if(b[i]>='0'&&b[i]<='9')
            d++;
    }
    if(c>=1&&d>=1)
        printf("alphanumeric");
    else
        printf("not");
}
