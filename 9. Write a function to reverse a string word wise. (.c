#include<string.h>
#include<stdio.h>
void swap();
int main()
{
    char a[27]=" MySirG education services";
    int i=0,start=0,end=0,flag=0;
    while(a[i]!='\0')
    {
        while(a[i]!=' ')
        {
            if(a[i]=='\0')
            {
                flag=1;
                break;
            }
            end++;
            i++;
        }
        swap(a,start,end-1);
        if(flag==1)
            break;
            start=end++;
        i++;
    }
    swap(a,0,i-1);
    printf("%s",a);
    return 0;

}
void swap(char a[],int i, int j)
{    char temp;
    while(i<=j)
  {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    i++;
    j--;
  }



}




