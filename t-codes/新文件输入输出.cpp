#include <iostream>
#include <cstdio>//�������ʱ�����д 
#include <cstring>

using namespace std;
int main(){
    int a,b; 
    freopen("cake.in","r",stdin); //�����ض����������ݽ���.in�ļ��ж�ȡ 
    freopen("cake.out","w",stdout); //����ض���������ݽ�������.out�ļ��� 
    while(cin>>a>>b) 
    //scanf("%d%d",&a,&b); 
    {cout<<a+b<<endl; }// ע��ʹ��endl 
    fclose(stdin);//�ر��ļ� 
    fclose(stdout);//�ر��ļ� 

    
    return 0;
}
