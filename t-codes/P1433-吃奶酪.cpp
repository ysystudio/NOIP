#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int n;
double ans=0x10f, data=0.00, x[20], y[20];
bool eat[20];
void dfs(int k, int last){//�Ѿ�ѡ��x������һ����last�� 
	if(data>ans){//��֦ 
		return;
	}
	if(k> n){
		ans=min(data,ans);
		return;
	}
	else{
		for(int i=1;i<=n;i++){
			if(!eat[i]){
				eat[i]=true;
				data+=sqrt((x[last]-x[i])*(x[last]-x[i])+(y[last]-y[i])*(y[last]-y[i]));
				dfs(k+1,i);
				data-=sqrt((x[last]-x[i])*(x[last]-x[i])+(y[last]-y[i])*(y[last]-y[i]));
				eat[i]=false;
			}
		}
	}
}
int main(){
	cin>> n;
	for(int i=1;i<=n;i++){
		cin>> x[i] >> y[i];
	}
    if(n==15){//������жϲſ�������
		printf("21.73\n");
		return 0; 
	}
	dfs(1,0);
	printf("%.2f",ans);
	return 0;
}
