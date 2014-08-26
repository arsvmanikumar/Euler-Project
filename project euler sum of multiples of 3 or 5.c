#include<stdio.h>

unsigned long long multiple_of_3_and_5(int n)
{
     unsigned long long mul=0;
     
     int iterator=0,multiple_3=0,multiple_5=0;
     while(multiple_3<n)
     {
        
        mul+=multiple_3;
        iterator++;
         multiple_3=3*iterator; 
     }
    iterator=0;
    while(multiple_5<n)
    {
         
        if(multiple_5%3!=0)
        mul+=multiple_5;
        iterator++;
        multiple_5=5*iterator;
    }
    return mul;
}

unsigned long long multiple_of_3_and_5v2(unsigned long long n)
{
    n=n-1;
    unsigned long long range_3=0,range_5=0,range_15=0;
    if(n>=3)
    range_3=(n-3)/3+1;
    if(n>=5)
    range_5=(n-5)/5+1;
    if(n>=15)
    range_15=(n-15)/15+1;
    unsigned long long sum_3=(range_3*(range_3+1))/2;
    unsigned long long sum_5=(range_5*(range_5+1))/2;
    unsigned long long sum_15=(range_15*(range_15+1))/2;
    
    return 3*sum_3+5*sum_5-15*sum_15;
}

int main()
{
    int t;
    unsigned long long n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%llu",&n);
        printf("%llu\n",multiple_of_3_and_5v2(n));
    }
    return 0;    
}