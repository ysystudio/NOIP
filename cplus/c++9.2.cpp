#include <iostream>
#include <cmath>
using namespace std;

//换量
//int main(){
//	int a,b,t;
//	cin>>a>>b;
//	t=a;
//	a=b;
//	b=t;
//	cout<<a<<b;
//	return 0;
//}

//只因数与呕数
//int main(){
//	int x;
//	cin>>x;
//	}
//	if(x%2==0){
//		cout<<"真是逊啦，这是呕数！";
//	}
//	if(x%2!=0){
//		cout<<"你太逊啦，这是只因数！";	
//	}	
//}
//


//苹果
//int main(){
//	double a,b;
//	cout<<"请输入斤数";
//	cin>>a;
//	if(a==0){
//		cout<<"哎呦——你干嘛！";
//	}
//	if(a>4){
//		b=20+(a-4)*5*0.8;
//	}
//	if(a<=4){
//		b=a*5;
//	}
//	cout<<b;
//	return 0;
//}

//BMI
//int main(){
//	cout<<"欢迎使用BMI计算器！鸡你太美！"<<endl;
//	double g,z,bmi;
//	cout<<"请输入你的身高（米）"<<endl;
//	cin>>g;
//	cout<<"请输入你的体重（千克）"<<endl;
//	cin>>z;
//	bmi=z/g/g;
//	cout<<"你的BMI是"<<bmi<<endl;
//	if(bmi<18){
//		cout<<"你太瘦了，多吃点只因！"<<endl;
//	}
//	if(bmi<24 && bmi>=18){
//		cout<<"你很正常，鸡你太美！"<<endl;
//	}
//	if(bmi>24){
//		cout<<"你太胖啦，多跟蔡徐坤打打篮球！"<<endl;
//	}
//	return 0;
//}

//SomeBody公式
//int (){
//	cout<<"欢迎使用海伦公式"<<endl;
//	double a,b,c,p,s;
//	cout<<"请输入a边边长"<<endl;
//	cin>>a;
//	cout<<"请输入b边边长"<<endl;
//	cin>>b;
//	cout<<"请输入c边边长"<<endl;
//	cin>>c;
//	if(a+b<=c or b+c<=a or c+a<=b){
//		cout<<"你这是些什么玩意儿！？"<<endl;
//	}
//	else{
//		p=(a+b+c)/2;
//		s=sqrt(p*(p-a)*(p-b)*(p-c));
//		cout<<"三角形面积是："<<s<<endl;
//		return 0;
//	}
//	
//}


#include <iostream>
using namespace std;
int main(){
	int a,b,c,d,ta,tb;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	ta=c-a;
	if(d<b){
		tb=60+d-b;
		ta-=1;
	}
	else{
		tb=d-b;
	}
	cout<<ta<<" "<<tb;
	return 0;
}
