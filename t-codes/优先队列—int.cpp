#include <iostream>
#include <cstdio>
#include <queue> //头文件 
using namespace std;
int main(){
	//priority_queue<int> q;//优先队列默认：优先大 
	priority_queue<int, vector<int>, greater<int>> q;//修改优先队列的默认：优先大 
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
 
