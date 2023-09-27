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
/*int r = 1;  //随便先取一个非零的数，必须给非零，否则循环进不来 
	while (r != 0) { //r比m小（把n化为比m还小的数）
        r = b % a  ;
        b = a;
        a = r;
	}*/
