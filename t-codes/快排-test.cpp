#include<iostream>
using namespace std;
const int N=9;
int a[N] ;
/*a�����е�һ��������Ҫ����*/
//��������1 48 61 42 55 87 30 17 59
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
                    while(a[++i] < s) ;  // �����ң�һ����ѭ������˼��ʲô������           
                    while(a[--j] > s) ;  // �����ң�һ����ѭ������˼��ʲô������             
                    if(i >= j)                 
                         break;             
                    cout<<"����ǰ��i��j�±꣺"<<i<<" "<<j<<endl;
					cout<<a[i]<<" "<<a[j]<<endl;
					temp=a[i];
                    a[i]=a[j];
                    a[j]=temp; 
                           
           }    
		   cout<<"�ݹ�ǰ��i��j�±꣺"<<i<<" "<<j<<endl;     
           sort(left, i-1);   // ����߽��еݹ�        
           sort(j+1, right);  // ���ұ߽��еݹ�     
 }  
}

