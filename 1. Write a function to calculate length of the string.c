#include<stdio.h>
#include<string.h>
int strlength();
int main()
{ char a[150];

 printf("enter the characters\n");
 fgets(a,150,stdin);

  printf(" length of string is %d",strlength(a));
  return 0;
}
int strlength( char b[])
{
    int i=0,c=0;
    for(i=0;b[i]!='\0';i++)
    {
        c++;
    }
    return (c-1);
}

