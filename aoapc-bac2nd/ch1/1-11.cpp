// 已知鸡和兔的总数量为n，总腿数为m。输入n和m，
// 依次输出鸡的数目和兔的数目。如 果无解，则输出No answer

// 设鸡有a只，兔有b只，则a＋b＝n，2a＋4b＝m，
// 联立解得a＝（4n－m）/2，b＝n－a。
// 在什么情况下此解“不算数”呢？首先，a和b都是整数；
// 其次，a和b必须是非负的。可以通过 下面的程序判断：

#include <cstdio>

int main()
{
  int a,b,n,m;
  scanf("%d%d",&n,&m);
  a = (4*n-m)/2;
  b = n-a;

  if(m % 2 == 1 || a <0 || b<0) {
    printf("No answer");
  }
  else{
    printf("%d %d",a,b);
  }
  
}
