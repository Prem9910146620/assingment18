
#include<stdio.h>
#include<string.h>
void uppercase();
int main()
{
    char a[150];
    printf("enter the character in small letter \n");
    fgets(a,150,stdin);
    uppercase(a);
    return 0;
}
void uppercase(char b[])
{
    int i;
    char c[150];
    for(i=0;b[i]!='\0';i++)
    {  if(b[i]>='a'&&b[i]<='z')
         c[i]=b[i]-32;

    }
    printf(" uppercase\n %s",c);

}
