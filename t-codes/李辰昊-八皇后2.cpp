//下标不能是负数，所以c和d数组下标都加7，定义长度都大一些，用了30
#include <stdio.h>
#include <iostream>
using namespace std;
int a[30], b[30], c[30], d[30]; 
int t=0;
void pf(void)
{
     int i;
     t++;
     for(i=1;i<=8;i++)
       cout<<a[i]<<" ";
     cout<<endl;
     return ; 
}
void queen(int i)
{
     int j;
     if(i>8)
     {pf();}
     else{
       for(j=1;j<=8;j++)
       {
         if(b[j]==0&&c[i+j+7]==0&&d[i-j+7]==0)
         {
         a[i]=j;
         b[j]=1;c[i+j+7]=1;d[i-j+7]=1;
         queen(i+1);
         b[j]=0;c[i+j+7]=0;d[i-j+7]=0;
         }
       }
     }
     return ;
}
int main()
{
    int k;
    for(k=0;k<=23;k++)
    {
    a[k]=0;
    b[k]=0;c[k]=0;d[k]=0;
    }
    queen(1);
    cout<<t<<endl;
    
    return 0;
}
                                
