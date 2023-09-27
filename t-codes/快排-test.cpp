#include<iostream>
using namespace std;
const int N=9;
int a[N] ;
/*a数组中第一个数不需要排序*/
//测试数据1 48 61 42 55 87 30 17 59
int main(){
  void sort(int left, int right);  
  int i,j,x;
  for(i=0;i<N;i++)
  {cin>>a[i];}
  sort(0,N-1);
  for(i=0;i<N;i++)
  {cout<<a[i]<<" ";}
  return 0;
}
void sort(int left, int right){
 int i, j;
 int s,temp;     
 if(left < right)  {         
           s = a[(left+right)/2];         
           i = left - 1;         
           j = right + 1;         
           while(1) 
           {             
                    while(a[++i] < s) ;  // 向右找，一个空循环，意思是什么都不做           
                    while(a[--j] > s) ;  // 向左找，一个空循环，意思是什么都不做             
                    if(i >= j)                 
                         break;             
                    cout<<"交换前的i、j下标："<<i<<" "<<j<<endl;
					cout<<a[i]<<" "<<a[j]<<endl;
					temp=a[i];
                    a[i]=a[j];
                    a[j]=temp; 
                           
           }    
		   cout<<"递归前的i、j下标："<<i<<" "<<j<<endl;     
           sort(left, i-1);   // 对左边进行递归        
           sort(j+1, right);  // 对右边进行递归     
 }  
}

