
#include<stdio.h>
#include<string.h>
void lowercase();
int main()
{
    char a[150];
    printf("enter the character in capital letter \n");
    fgets(a,150,stdin);
    lowercase(a);
    return 0;
}
void lowercase(char b[])
{
    int i;
    char c[150];
    for(i=0;b[i]!='\0';i++)
    {  if(b[i]>='A'&&b[i]<='Z')
         c[i]=b[i]+32;

    }
    printf(" lowercase\n %s",c);

}
