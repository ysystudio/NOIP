#include <iostream>
#include <cstdio>
#include <queue> //ͷ�ļ� 
using namespace std;
int main(){
	//priority_queue<int> q;//���ȶ���Ĭ�ϣ����ȴ� 
	priority_queue<int, vector<int>, greater<int>> q;//�޸����ȶ��е�Ĭ�ϣ����ȴ� 
	for(int i=0; i<5;i++){
		int a;
		cin>>a;
		q.push(a);
	}
	//cout<<q.front();
	//while(!q.empty()){
		cout<<q.top()<<" ";
		q.pop();
	//}	
	return 0;
}
//greater<int>(),less<int>()
//sort(a,a+n,greater<int>());
 
