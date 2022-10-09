
#include<stdio.h>
void repeat();
#include<string.h>
int main()
{
    char a[150];
    printf("enter the character\n");
    fgets(a,150,stdin);
    repeat(a);
    return 0;
}
void repeat(char b[])
{
    int i=0;
    int j[150]={0};
    while(b[i]!='\0')
    {
      j[b[i++]]++;
    }
    for(i=0;i<150;i++)
    {
        if(j[i]!=0)
    printf("%c==>%d\n",i,j[i]);
    }
}
