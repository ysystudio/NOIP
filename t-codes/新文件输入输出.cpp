#include <iostream>
#include <cstdio>//这个考试时候必须写 
#include <cstring>

using namespace std;
int main(){
    int a,b; 
    freopen("cake.in","r",stdin); //输入重定向，输入数据将从.in文件中读取 
    freopen("cake.out","w",stdout); //输出重定向，输出数据将保存在.out文件中 
    while(cin>>a>>b) 
    //scanf("%d%d",&a,&b); 
    {cout<<a+b<<endl; }// 注意使用endl 
    fclose(stdin);//关闭文件 
    fclose(stdout);//关闭文件 

    
    return 0;
}
