#include <iostream>
using namespace std;
int c[30];
int char_sum (){
	char a[101];
	int i=0;
	cin.getline(a,100);
	while(a[i]!='\0'){
		c[a[i]-'a']+=1;
		i++;
	}
	for(int i=0;i<26;i++){
		cout<<char(i+'a')<<':'<<c[i]<<endl;
	}
	return 0;
}
