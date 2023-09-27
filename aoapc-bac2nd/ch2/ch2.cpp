
#include "math.h"
#include "stdio.h"
#include <cstdio>

// 输出所有形如aabb的4位完全平方数（即前两位数字相等，后两位数字也相等）。
// 完全平方数即是平方根是整数的整数
int aabb() {

  for (int i = 1; i <= 9; i++) {
    for (int j = 0; j <= 9; j++) {
      int n = i * 1100 + j * 11;
      int m = int(sqrt(n) + 0.5);

      if (m * m == n)
        printf("%d\n", n);
    }
  }
  return 0;
}

// 例题2-2 3n＋1问题
// 猜想(4)：对于任意大于1的自然数n，若n为奇数，则将n变为3n＋1，否则变为n的一半。
// 经过若干次这样的变换，一定会使n变为1。例如，3→10→5→16→8→4→2→1。
// 输入n，输出变换的次数。n≤109。
//
// C99中新增的long
// long即可解决问题，其范围是-263～263-1，唯一的区别就是要把输入时
// 的％d改成％lld。
// 但这也是不保险的——在MinGW的gcc(7)中，要把％lld改成％I64d，但奇怪
// 的是VC2008里又得改回％lld。 是不是很容易搞错？所以如果涉及long
// long的输入输出，常用 C＋＋的输入输出流
int cout_3n_1() {

  int n, count = 0;
  scanf("%d", &n);

  if (n > 1e9) {
    printf("%d", count);
    return 0;
  }

  while (n > 1) {
    if (n % 2 == 1)
      n = 3 * n + 1;
    else
      n = n / 2;

    count += 1;
  }

  printf("%d\n", count);
  return 0;
}

// 例题2-3 近似计算 计算 pi/4 = 1-1/3+1/5-1/7... ，直到最后一项小于10-6。
// 【分析】本题和例题2-2一样，也是重复计算，因此可以用循环实现。
// 但不同的是，只有算完一 项之后才知道它是否小于10-6。也就是说，
// 循环终止判断是在计算之后，而不是计算之前。 这样的情况很适合使用do-while循环。


#include <stdio.h> 
int pi_1_4() { 
  double sum = 0; 
  for(int i = 0; ; i++) { 
    double term = 1.0 / (i*2+1); 
    if(i % 2 == 0) sum += term; 
    else sum -= term; 
    if(term < 1e-6) break; 
  }
  printf("%.6f\n", sum);
  return 0;
}

// test
int main() {
  // aabb();
  // cout_3n_1();
  pi_1_4();
  return 0;
}
