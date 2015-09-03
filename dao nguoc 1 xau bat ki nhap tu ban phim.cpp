/*chuong trinh dao nguoc xau ki tu*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    char a[100],t;
    int i,j,n;
    printf("nhap chuoi a: ");gets(a);
    n=strlen(a);
   /* co the viet ham doi cho : for(i=0,j=n-1;i<j;j--,i++)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    for(i=0;i<=n-1;i++)*/printf("\n xau dao la:");
    for(i=n-1;i>=0;i--)
    printf("%c",a[i]);
    
    getch();
    return 0;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
