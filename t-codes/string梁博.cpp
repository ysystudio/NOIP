#include<string>
#include<algorithm>//������ͷ�ļ� 
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
		cout<<s.find(s1)<<endl;//���ر�� 	
	cout<<s.substr(1,2)<<endl;
	cout<<s.substr(1)<<endl;//[1]��ʼ������ 
	s=reverse (s);
	cout<<s<<endl;
	return 0;
} 
