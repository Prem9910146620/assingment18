#include<stdio.h>
#include<string.h>
void compare();
int main()
{
    char a[150];
    char b[150];
    printf("enter first string charaters\n");
    fgets(a,150,stdin);
    printf("enter second string characters\n");
    fgets(b,150,stdin);
      compare(a,b);
    return 0;
}
void compare(char s1[],char s2[])
{
    int i=0,j=0,k=0;
    while(s1[i]!='\0'||s2[i]!='\0')
    {
        if(s1[i]>s2[i])
        { j=1;
            break; }
        if(s1[i]<s2[i])
            { k=1;
                break;
            }
          i++;
    }
    if(j==1)
        printf("s1 > s2");
    else
        if(k==1)
        printf("s1 < s2");
    else
        printf("s1 == s2");
  return 0;
}
