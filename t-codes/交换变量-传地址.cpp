#include<iostream>
using namespace std;
int main(){
          int a,b;
          void swap(int &x,int &y);
          cout<<"������������"<<endl;
          cin>>a>>b;
          swap(a,b);
          cout<<"���ú�����a��bֵΪ��";
          cout<<a<<" "<<b;
          
          return 0;
}
void swap(int &x,int &y){    
     int t;
     t=x;
     x=y;
     y=t;
     return;
} 
           
