#include <iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;	
	while (b != 0) {
        int r = a % b ;
        a = b;
        b = r;
	}
	cout<<a<<endl;
	return 0;
}
/*int r = 1;  //�����ȡһ�������������������㣬����ѭ�������� 
	while (r != 0) { //r��mС����n��Ϊ��m��С������
        r = b % a  ;
        b = a;
        a = r;
	}*/
