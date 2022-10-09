#include<stdio.h>
#include<string.h>
void palindrome();
int main()
{
    char a[20];
    printf("enter the characters\n");
    fgets(a,20,stdin);
    palindrome(a);
    return 0;
}
void palindrome(char a[])
{  int i=0,j=strlen(a)-2;
int d=0,k;
   k=j/2;
  while(i<=j)
  { if(a[i]==a[j])
  { d++;}
   j--;
    i++; }
  if(d>k)
    printf("\n polindrome");
  else
    printf("not");

}
