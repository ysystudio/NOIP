//#include <iostream>
//using namespace std;
//int h[405][405]={-1};
//int ma(int xl,int yl,int xm,int ym,int c){
//	int x=0,ci=c;
//	if(xm+2<xl && ym+1<yl){
//		if(h[xm+2][ym+1]==-1){
//			h[xm+2][ym+1]+=1+ci;
//			ma(xl,yl,xm+2,ym+1,c+1);
//			x+=1;
//		}
//	}
//	if(xm+2<xl && ym-1<yl){
//		if(h[xm+2][ym-1]==-1){
//			h[xm+2][ym-1]+=1+ci;
//			ma(xl,yl,xm+2,ym-1,c+1);
//			x+=1;
//		}
//	}
//	if(xm+1<xl && ym+2<yl){
//		if(h[xm+1][ym+2]==-1){
//			h[xm+1][ym+2]+=1+ci;
//			ma(xl,yl,xm+1,ym+2,c+1);
//			x+=1;
//		}
//	}
//	if(xm+1<xl && ym-2<yl){
//		if(h[xm+1][ym-2]==-1){
//			h[xm+1][ym-2]+=1+ci;
//			ma(xl,yl,xm+1,ym-2,c+1);
//			x+=1;
//		}
//		//mmm
//	}
//	if(xm-2<xl && ym+1<yl){
//		if(h[xm+2][ym+1]==-1){
//			h[xm+2][ym+1]+=1+ci;
//			x+=1;
//		}
//	}
//	if(xm-2<xl && ym-1<yl){
//		if(h[xm+2][ym-1]==-1){
//			h[xm+2][ym-1]+=1+ci;
//			x+=1;
//		}
//	}
//	if(xm-1<xl && ym+2<yl){
//		if(h[xm+1][ym+2]==-1){
//			h[xm+1][ym+2]+=1+ci;
//			x+=1;
//		}
//	}
//	if(xm-1<xl && ym-2<yl){
//		if(h[xm+1][ym-2]==-1){
//			h[xm+1][ym-2]+=1+ci;
//			x+=1;
//		}
//	}
//	if(x=0){
//		return;
//	}
//	x=0;
//	ma(xl,yl,ci+1);
//}
//int main(){
//	int a,b,x,y;
//	cin>>a>>b;
//	cin>>x>>y;
//	int h[a][b]={-1};
//	ma(a,b,x,y,h,1);
//}



//#include <iostream>
//#include<string.h>
//int sum=0;
//char qi[1010][1010];
//int zouguo[1010][1010]={0};
//using namespace std;
//void zou(int x,int y,int n){
//	int xx,yy;
//	if(x<n&&y<n&&x>=0&&y>=0){
//		zouguo[x][y]=1;
//	}
//	xx =x+1;
//	yy =y;
//	if(xx<n&&yy<n&&xx>=0&&yy>=0&&zouguo[xx][yy]==0&&qi[xx][yy]!=qi[x][y]){
//		zouguo[xx][yy]=1;
//		sum++;
//		zou(xx,yy,n);
//	}
//	xx =x-1;
//	yy =y;
//	if(xx<n&&yy<n&&xx>=0&&yy>=0&&zouguo[xx][yy]==0&&qi[xx][yy]!=qi[x][y]){
//		zouguo[xx][yy]=1;
//		sum++;
//		zou(xx,yy,n);
//	}
//	xx =x;
//	yy =y-1;
//	if(xx<n&&yy<n&&xx>=0&&yy>=0&&zouguo[xx][yy]==0&&qi[xx][yy]!=qi[x][y]){
//		zouguo[xx][yy]=1;
//		sum++;
//		zou(xx,yy,n);
//	}
//	xx =x;
//	yy =y+1;
//	if(xx<n&&yy<n&&xx>=0&&yy>=0&&zouguo[xx][yy]==0&&qi[xx][yy]!=qi[x][y]){
//		zouguo[xx][yy]=1;
//		sum++;
//		zou(xx,yy,n);
//	}
//	return;
//}
//int man(){
//	int n,m,x,y;
//	cin>>n;
//	cin>>m;
//	int sum_ji[m];
//	getchar();
//	for(int i=0;i<n;i++){
//		cin.getline(qi[i],n+1);//?
//		//cout<<qi[i];
//	}
//	
//	for(int i=0;i<m;i++){
//		cin>>x>>y;
//		memset(zouguo,0,sizeof(zouguo));
//		sum+=1;
//		zou(x-1,y-1,n);
//		sum_ji[i]=sum;
//		sum=0;
//	}
//	for(int i=0;i<m;i++){
//		cout<<sum_ji[i]<<endl;
//	}
//	return 0;
//}


#include <iostream>
int jishu=0;
using namespace std;
void ji(double mei,double liao){
	double mei_do=mei,liao_do=liao;
	if(mei-1>=liao-1&&liao-1>=(mei-1)/3&&mei-1>=0&&liao-1>=0){
		cout<<1<<" ";
		mei_do-=1;liao_do-=1;
		ji(mei-1,liao-1);
	}
	if(mei-2>=liao-1&&liao-1>=(mei-2)/3&&mei-2>=0&&liao-1>=0){
		cout<<2<<" ";
		mei_do-=2;liao_do-=1;
		ji(mei-2,liao-1);
	}
	if(mei-3>=liao-1&&liao-1>=(mei-3)/3&&mei-3>=0&&liao-1>=0){//1.美味质数够用2.料的数量够
		cout<<3<<" ";
		mei_do-=3;liao_do-=1;
		ji(mei-3,liao-1);
	}
	if(mei_do==0 && liao_do==0){
		cout<<endl;
		jishu+=1;
		return;
	}	
	return;
}
int main(){
	double mei;
	cin>>mei;
	ji(mei,10);
	cout<<endl;
	cout<<jishu;
	return 0;
}


//#include <iostream>
//using namespace std;
//int main(){
//	int t,x=1,n;
//	cin>>n;
//	int h[n+5];
//	for(int i=0;i<n;i++){
//		cin>>h[i];
//	}
//	while(x!=0){
//		x=0;
//		for(int i=0;i<n-1;i++){
//			if(h[i]>h[i+1]){
//				t=h[i];
//				h[i]=h[i+1];
//				h[i+1]=t;
//				x+=1;
//			}
//		}
//	}
//	for(int i=0;i<n;i++){
//		cout<<h[i]<<" ";
//	}
//	return 0;
//}
//
//
//#include<iostream>
//using namespace std;
//int n,a[1000001];
//void pai(int l,int r)
//{
//	int mid=a[(l+r)/2];
//	int i=l,j=r;
//	do{
//		while(a[i]<mid) i++;
//		while(a[j]>mid) j--;
//		if(i<=j){
//			swap(a[i],a[j]);
//			i++;
//			j--;
//		}
//	}while(i<=j);
//	if(l<j) pai(l,j);
//	if(i<r) pai(i,r);
//}
//int main()
//{
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		cin>>a[i];
//	} 
//	pai(1,n);
//	for(int i=1;i<=n;i++){
//		cout<<a[i]<<" ";
//	} 
//	return 0;
//}


