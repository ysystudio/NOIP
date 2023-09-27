//#include "stdio.h"
//
//int main()
//{
//	int i = 5;
//	printf("fdsf %d\n",i);
//	printf("哈哈\n");
//	return i;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//	// 这是一个注释
//	int i;
//	cin>>i;
//	cout << "Hello World!"<<i;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main(){
//	cout<<""<<endl;
//	int a,b,sum;
//	cin>>a;
//	cin>>b;
//	sum=a%b;
//	cout<<sum<<endl;
//	return 0;
//}



#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double a,b;
	cin>>a;
	b=a*a*3.14;
	cout<<fixed<<setprecision(2)<<b<<endl;
	return 0;
}
