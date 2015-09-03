#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    long n,i;
    long a[1000];
    printf("nhap so phan tu cua day:");
    scanf("%d",&n);
    a[0]=1;
    a[1]=1;
    for(i=2;i<=n;i++)
    {
      a[i]=a[i-1]+a[i-2];
    }
    printf("day fibonaci:\n");
    for(i=1;i<=n;i++)
    {
      printf("%d \n ",a[i]);
    }
    getch();
    return 0;
}
