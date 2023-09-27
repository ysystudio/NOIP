#include<string>
#include<algorithm>//必须有头文件 
#include<cstring>
#include<iostream>
using namespace std;
string reverse(string s){
	reverse(s.begin(),s.end());
	return s;
}
int main(){
	string s1, s;
	getline(cin, s);
	cin>>s1;
	if(s.find(s1)== string::npos)
		cout<<"no found"<<endl;
	else
		cout<<s.find(s1)<<endl;//返回编号 	
	cout<<s.substr(1,2)<<endl;
	cout<<s.substr(1)<<endl;//[1]开始的所有 
	s=reverse (s);
	cout<<s<<endl;
	return 0;
} 
