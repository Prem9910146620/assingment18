#include<stdio.h>
#include<string.h>
int word();
int main()
{
    char a[100];
    printf("enter the sentence\n");
    fgets(a,100,stdin);
    printf(" total words is =%d",word(a));
    return 0;

}
int word(char b[])
{
    int i=0,c=1;
    for(i=0;b[i]!='\0';i++)
    {
        if(b[i]==' '&&b[i+1]!=' ')
            c++;
    }

    return c;
}
