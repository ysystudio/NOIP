#include<iostream>
using namespace std;
int main(){
          int a,b;
          void swap(int &x,int &y);
          cout<<"输入两个数："<<endl;
          cin>>a>>b;
          swap(a,b);
          cout<<"调用函数后，a、b值为：";
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
           
