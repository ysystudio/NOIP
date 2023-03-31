//#include <iostream>
//#include <queue>
//using namespace std;
//int main(){
//	queue<int>q;
//	int t;
//	cin>>t;
//	for(int i=0;i<=t;i++){
//		q.push(i);
//	}
//	cout<<q.size()<<endl;
//	while(!q.empty()){
//		cout<<q.front()<<endl;
//		q.pop();
//	}
//	return 0;
//}






//#include <iostream>
//#include <queue>
//using namespace std;
//int main(){
//	int a,t,w,i=1;
//	cin>>a;
//	queue<int>q;
//	for(int i=1;i<=a;i++){
//		q.push(i);
//	}
//	while(!q.empty()){
//		if(i%w==0){
//			cout<<q.front()<<" ";
//			q.pop();
//		}
//		else{
//			t=q.front();
//			q.pop();
//			q.push(t);
//		}
//		i++;	
//	}
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main(){
//	int a,w,i=1,cnt,j=1;
//	cin>>a;
//	w=a;
//	bool q[a*2+2];
//	
//	while(true){
//		for(int x=0;x<a*2+2;x++){
//		q[x]=true;
//		}
//		cnt=0;
//		i=1;
//		j=1;
//		while(cnt<a){
//			if(q[j]==true)i++;
//			j++;
//			if(i==w){
//				if(j<=a){
//					break;
//				}
//				q[j]=false;
//				cnt++;
//				i=1;
//				if(cnt==a){
//					cout<<w;
//					return 0;
//				}
//			}
//			
//			if(j>=a*2){
//				j=j%a*2;
//			}	
//		}
//		w+=1;
//	}
//	
//	return 0;
//}
//

#include<stack>
#include<iostream>
using namespace std;
int main(){
	char n;
	int a=0;
	string xiao;
	cin>>xiao;
	stack<char> s;
	while(a<int(xiao.size())){
		n=xiao[a];
		if(!s.empty()){
			if(int(n)+32==int(s.top()) || int(n)-32==int(s.top())){
				s.pop();
			}
			else{
				s.push(n);
			}
		}
		else{
			s.push(n);	
		}
		a++;
	}
	while(!s.empty()){
		cout<<s.top();
		s.pop();
	}
	return 0;
}






