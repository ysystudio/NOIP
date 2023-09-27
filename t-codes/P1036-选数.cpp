#include <iostream>
#include <cmath> 
using namespace std;
int ans, n, k, a[25];
bool prime(int n) {
	int i;
	for (i = 2; i<= sqrt(n); i++) {
		if (n% i == 0) {
			return false;
		}
	}
	return true;
}
void select(int start, int count, int sum) {
    //start：开始选数的地方
    //count：已经选了几个数
    //sum：到目前为止选的数的和	
    int i;
	if(count == k){//如果选完了的话
        if(prime(sum))
            ans++;
        return ;
    }	
	for (i = start; i <= n; i++) {
        select(i + 1, count + 1, sum + a[i]);		
        //从a里面下一个数开始选；个数+1；sum加上这次选的数        
        //直接从下一个数开始选，所以不可能选到之前选过的数
        //不用判断当前的数是否被选过
	}
}	

int main() {
	
	int i;
	cin >> n >> k;
	for (i = 1; i <= n; i++) {
		cin >> a[i];
	}
	select(1, 0, 0);
    //从第一个数开始找，已经找了0个数，当前和是0
	cout << ans << endl;
	return 0;
}

