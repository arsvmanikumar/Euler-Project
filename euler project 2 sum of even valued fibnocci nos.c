#include<stdio.h>

unsigned long long fib(unsigned long long n)
{
    unsigned long long f[]={2,0};
    int i=0;
    unsigned long long sum=0;
    while(f[i]<n)
    {
        sum+=f[i];
        i=(i+1)%2;
        f[i]=4*f[(i+1)%2]+f[i];
    }
   // printf("%llu\n",sum);
    return sum;
}

int main()
{
    int t;
    unsigned long long n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%llu",&n);
        printf("%llu\n",fib(n));
    }
    return 0;
}