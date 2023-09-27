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
    //start����ʼѡ���ĵط�
    //count���Ѿ�ѡ�˼�����
    //sum����ĿǰΪֹѡ�����ĺ�	
    int i;
	if(count == k){//���ѡ���˵Ļ�
        if(prime(sum))
            ans++;
        return ;
    }	
	for (i = start; i <= n; i++) {
        select(i + 1, count + 1, sum + a[i]);		
        //��a������һ������ʼѡ������+1��sum�������ѡ����        
        //ֱ�Ӵ���һ������ʼѡ�����Բ�����ѡ��֮ǰѡ������
        //�����жϵ�ǰ�����Ƿ�ѡ��
	}
}	

int main() {
	
	int i;
	cin >> n >> k;
	for (i = 1; i <= n; i++) {
		cin >> a[i];
	}
	select(1, 0, 0);
    //�ӵ�һ������ʼ�ң��Ѿ�����0��������ǰ����0
	cout << ans << endl;
	return 0;
}

