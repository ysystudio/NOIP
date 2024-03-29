#include <iostream>
#include <cstring>
using namespace std;
/*
# 二分法排序
## 题目描述
输入4个数，然后对4个数进行排序，由小到大输出这组数
## 输入格式
一行，有4个数字。
## 输出格式
一行，有4个数字。用空格隔开。
## 样例 #1
### 样例输入 #1
```
10 6 1 4
```
### 样例输出 #1
```
1 4 6 10
```*/
// #include <iostream>
// using namespace std;
int bi_sort(){
	int a[5],s=0,f=0,t;
	for(int i=0;i<4;i++){
		cin>>a[i];
	}
	for(int j=3;j>1;j--){
		s=0;
		for(int i=0;i<=j;i++){
			if(s<a[i]){
				s=a[i];
				f=i;
			}		
		}
		if(f!=j){
			t=a[j];
			a[j]=a[f];
			a[f]=t;
		}
	}
	for(int i=0;i<4;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
/*
# 2.最频繁的字母
## 题目描述
小明是一个翻译，每天都要看着令人头疼的英文。他无聊时会想起一些很奇怪的问题，例如英文单词是如何组成的，它们有什么来源等等。
有一天他突然想，到底哪个英文字母在英文单词里出现的频率最高呢？他发现这个工作量还是很大的，于是找你帮助解决。
他会提供你一个仅由26个小写字母（a~z）组成的字符串s（中间不含空格），请你计算一下该字符串s中哪个字母出现的次数最多，如果说出现次数最多的字母不只一个，那么请把它们都打印出来，按照字母表的顺序输出。
## 输入格式
每组数据都只有一行，就是题目中所面熟的字符串s，它的长度不会超过200。
## 输出格式
你也只需要输出一行，即出现次数最多的字母。如果出现次数最多的字母不只一个，那么按照字母表的顺序输出。
## 样例 #1
### 样例输入 #1
```
abbb
```
### 样例输出 #1
```
b
```
## 样例 #2
### 样例输入 #2
```
ddddafcvcvbbbb
```
### 样例输出 #2
```
b
d
```
*/
// #include <iostream>
// using namespace std;
int most_char(){
	int i=0,h[27]={0},m=0,m1=0;
	char a[500];
	cin>>a;
	while(a[i]!='\0'){
		h[a[i]-'a']+=1;
		i++;
	}
	for(int i=0;i<26;i++){
		if(m<h[i]){
			m=h[i];
			m1=i;
		}
	}
	for(int i=0;i<26;i++){
		if(m==h[i]){
			cout<<char(i+'a')<<endl;
		}
	}
	return 0;
}
/*
# 译密码
## 题目描述
为了使电文博阿弥，可以按一定规律将电文转换成密码。收报人再按约定的规律将其译回原文。例如，可以按以下规律将电文变成密码：将字母A变成E，将a变成e，即每个字母变成其后的第4个字母，大小写不变。W变成A,X变成B,Y变成C,Z变成D。字母按上述规律转换，非字母字符不变，电文长度不超过100。
## 输入格式
China
## 输出格式
## 样例 #1
### 样例输入 #1
```
China
```
### 样例输出 #1
```
Glmre
```*/
// #include <iostream>
// using namespace std;
int encode_password(){
    char a[100];
	int i=0;
	cin.getline(a,100);
	while(a[i]!='\0'){
		if(a[i]>=97 && a[i]<=122){
			if(a[i]+4>122)
				cout<<char(a[i]-22);
			else
				cout<<char(a[i]+4);
		}
		else
			cout<<a[i];
		i++;
	}
	return 0;
}
/*
# 输出亲朋字符串[A07P05]
## 题目描述
编写程序，求给定字符串s的亲朋字符串s1。 
亲朋字符串s1定义如下：给定字符串s的第一个字符的ASCII值加第二个字符的ASCII值，得到第一个亲朋字符； 给定字符串s的第二个字符的ASCII值加第三个字符的ASCII值，得到第二个亲朋字符；依此类推，直到给定字符串s的倒数第二个字符。亲朋字符串的最 后一个字符由给定字符串s的最后一个字符ASCII值加s的第一个字符的ASCII值。
## 输入格式
输入一行，一个长度大于等于2，小于等于100的字符串。字符串中每个字符的ASCII值不大于63。
## 输出格式
输出一行，为变换后的亲朋字符串。输入保证变换后的字符串只有一行。
## 样例 #1
### 样例输入 #1
```
1234
```
### 样例输出 #1
```
cege
```*/
// #include <iostream>
// using namespace std;
int freind_string(){
	int i=0;
	char h[110]={0},h1[110]={0};
	cin.getline(h,109);
	while(h[i+1]!='\0'){
		h1[i]=char(h[i]+h[i+1]);
		i++;
	}
	h1[i]=char(h[i]+h[0]);
	for(int j=0;j<=i;j++){
		cout<<h1[j];
	}
	return 0;
}
/*
# 配对碱基链[A07P06]
## 题目描述
脱氧核糖核酸（DNA）由两条互补的碱基链以双螺旋的方式结合而成。而构成DNA的碱基共有4种，分别为腺瞟呤（A）、鸟嘌呤（G）、胸腺嘧啶（T）和胞嘧啶（C）。我们知道，在两条互补碱基链的对应位置上，腺瞟呤总是和胸腺嘧啶配对，鸟嘌呤总是和胞嘧啶配对。你的任务就是根据一条单链上的碱基序列，给出对应的互补链上的碱基序列。
## 输入格式
一个字符串，表示一条碱基链。这个字符串只含有大写字母A、T、G、C，分别表示腺瞟呤、胸腺嘧啶、鸟嘌呤和胞嘧啶。字符串长度不超过255。
## 输出格式
一个只含有大写字母A、T、G、C的字符串，为与输入的碱基链互补的碱基链
## 样例 #1
### 样例输入 #1
```
ATATGGATGGTGTTTGGCTCTG
```
### 样例输出 #1
```
TATACCTACCACAAACCGAGAC
```*/
// #include <iostream>
// using namespace std;
int match_jian_ji_lian(){
	int i=0;
	char h[260]={0};
	cin.getline(h,258);
	while(h[i]!='\0'){
		if(h[i]=='A'){
			h[i]='T';
		}
		else if(h[i]=='T'){
			h[i]='A';
		}
		else if(h[i]=='G'){
			h[i]='C';
		}
		else{
			h[i]='G';
		}
		i++;
	}
	for(int j=0;j<=i;j++){
		cout<<h[j];
	}
	return 0;
}
/*
# 字符替换[A07P07]
## 题目描述
把一个字符串中特定的字符全部用给定的字符替换，得到一个新的字符串
## 输入格式
只有一行，由一个字符串和两个字符组成，中间用单个空格隔开。字符串是待替换的字符串，字符串长度小于等于30个字符，且不含空格等空白符；
接下来一个字符为需要被替换的特定字符；
接下来一个字符为用于替换的给定字符。
## 输出格式
一行，即替换后的字符串。
## 样例 #1
### 样例输入 #1
```
hello-how-are-you o O
```
### 样例输出 #1
```
hellO-hOw-are-yOu
```*/
// #include <iostream>
// using namespace std;
int str_replace(){
	int i=0;
	char h[260]={0},a,b;
	cin>>h;
	cin>>a;
	cin>>b;
	while(h[i]!='\0'){
		if(h[i]==a){
			h[i]=b;
		}
		cout<<h[i];
		i++;
	}
    return 0;
}

/*题目描述
给定一个只包含小写字母的字符串，请你找到第一个仅出现一次的字符。如果没有，输出no。
输入格式
一个字符串，长度不超过100000。
输出格式
输出第一个仅出现一次的字符，若没有则输出no。
输入输出样例
输入 #1复制
abcabd
输出 #1复制
c
说明/提示
2019.7.18 22:13: 搬运者已加强此题数据 请各位同学仔细读题～*/
// #include <iostream>
// using namespace std;
int find_once_char(){
    int h[127];
	char a[100010];
	long long b=0;
	cin.getline(a,100001);
	while(a[b]!='\0'){
		h[int(a[b])]+=1;
		b++;
	}
	for(int i=0;i<100000;i++){
        if(h[int(a[i])]==1){
   	    	cout<<a[i];
	    	b=0;
	    	break;
    	}
    }
	if(b!=0)
		cout<<"no";
	return 0;
}
/*
# 基因相关性[A07P03]
## 题目描述
为了获知基因序列在功能和结构上的相似性，经常需要将几条不同序列的DNA进行比对，以判断该比对的DNA是否具有相关性。
现比对两条长度相同的DNA序列。首先定义两条DNA序列相同位置的碱基为一个碱基对，如果一个碱基对中的两个碱基相同的话，则称为相同碱基对。接着计算相同碱基对占总碱基对数量的比例，如果该比例大于等于给定阈值时则判定该两条DNA序列是相关的，否则不相关。
## 输入格式
有三行，第一行是用来判定出两条DNA序列是否相关的阈值，随后2行是两条DNA序列（长度不大于500）。
## 输出格式
若两条DNA序列相关，则输出“yes”，否则输出“no”。
## 样例 #1
### 样例输入 #1
```
0.85
ATCGCCGTAAGTAACGGTTTTAAATAGGCC
ATCGCCGGAAGTAACGGTCTTAAATAGGCC
```
### 样例输出 #1
```
yes
```*/
// #include <iostream>
// using namespace std;
int jiyin_relation(){
	double a,f;
	int l=0;
	char h[2][505];
	cin>>f;
	cin>>h[0],500;
	cin>>h[1],500;
	while(h[0][l]!='\0' && h[1][l]!='\0'){
		if(h[0][l]==h[1][l])
			a+=1;
		l+=1;
	}
	a=a/l;
	if(a>=f)
		cout<<"yes";
	else
		cout<<"no";
	return 0;	
}
/*
# 石头剪子布[A07P04]
## 题目描述
石头剪子布，是一种猜拳游戏。起源于中国，然后传到日本、朝鲜等地，随着亚欧贸易的不断发展它传到了欧洲，到了近现代逐渐风靡世界。简单明了的规则，使得石头剪子布没有任何规则漏洞可钻，单次玩法比拼运气，多回合玩法比拼心理博弈，使得石头剪子布这个古老的游戏同时用于“意外”与“技术”两种特性，深受世界人民喜爱。 
游戏规则：石头打剪刀，布包石头，剪刀剪布。 
现在，需要你写一个程序来判断石头剪子布游戏的结果。
## 输入格式
输入包括N+1行：
第一行是一个整数N，表示一共进行了N次游戏。1 <= N <= 100。
接下来N行的每一行包括两个字符串，表示游戏参与者Player1，Player2的选择（石头、剪子或者是布）：
S1 S2
字符串之间以空格隔开S1,S2只可能取值在{"Rock", "Scissors", "Paper"}（大小写敏感）中。
## 输出格式
输出包括N行，每一行对应一个胜利者（Player1或者Player2），或者游戏出现平局，则输出Tie。
## 样例 #1
### 样例输入 #1
```
3
Rock Scissors
Paper Paper
Rock Paper
```
### 样例输出 #1
```
Player1
Tie
Player2
```
## 提示
Rock是石头，Scissors是剪刀，Paper是布。*/
// #include <iostream>
// using namespace std;
int stone_scissors_paper(){
	int x,j=0,k=0;
	cin>>x;
	char h1[10],h2[10];
	cin.get();
	for(int i=0;i<x;i++){
        cin>>h1;
        cin>>h2;
		if(h1[0]==h2[0])
			cout<<"Tie"<<endl;
		else if((h1[0]=='R' && h2[0]=='S')|| (h1[0]=='P'&&h2[0]=='R')|| (h1[0]=='S'&& h2[0]=='P'))
			cout<<"Player1"<<endl;
		else
			cout<<"Player2"<<endl;
	}
	return 0;	
}

/*
# 忽略大小写的字符串比较[16]
## 题目描述
一般我们“字典序”来比较两个字符串的大小关系，形象地说，就是把两个字符串按照它们在字典里面的顺序来决定大小，在字典里面排在前面的就是小，在字典里面排在后面的就是大。
比较方法为对两个字符串从前往后逐个字符相比较（按ASCII码值大小比较），直到出现不同的字符或遇到'\0'为止。如果全部字符都相同，则认为相同；如果出现不相同的字符，则以第一个不相同的字符的比较结果为准（注意：如果某个字符串遇到'\0'而另一个字符串还未遇到'\0'，则前者小于后者）。
但在有些时候，我们比较字符串的大小时，希望忽略字母的大小写，例如"Hello"和"hello"在忽略字母大小写时是相等的。请写一个程序，实现对两个字符串进行忽略字母大小写的大小比较。
## 输入格式
输入为两行，每行一个字符串，共两个字符串。（每个字符串长度都小于80）
## 输出格式
如果第一个字符串比第二个字符串小，输出一个字符"<"；
如果第一个字符串比第二个字符串大，输出一个字符">"；
如果两个字符串相等，输出一个字符"="。
## 样例 #1
### 样例输入 #1
```
Hello, how are you?
hello, How are you?
```
### 样例输出 #1
```
=
```*/
// #include <iostream>
// #include <cstring>
// using namespace std;
int str_cmp_loose(){
	char a[80],b[80],c,d;
	int alen,blen,len;
	cin.getline(a,80);
	cin.getline(b,80);
	alen=strlen(a);
	blen=strlen(b);
	if(alen>blen)
		len=blen;
	else
		len=alen;
	for(int i=0;i<len;i++){
		c=a[i];
		d=b[i];
		if(c>=97 && c<=122)
			c-=32;
		if(d>=97 && d<=122)
			d-=32;
		if(c>d)
		{cout<<'>';return 0;}
		if(d>c)
		{cout<<'<';return 0;}
	}
	if(alen>blen)
		cout<<">";
	else if(alen<blen)
		cout<<"<";
	else
		cout<<"=";
	return 0;
}

/*
# umi的函数
## 题目背景
umi 找到了一个神秘的函数 f。
## 题目描述
这个函数接受两个字符串 s1,s2。这些字符串只能由小写字母组成，并且具有相同的长度。这个函数的输出是另一个长度与 s1,s2 相同的字符串 g。g 的第 i 个字符等于 s1 的第i 个字符和 s2 的第 i 个字符的最小值，简单来说，g[i]=min(s1[i],s2[i])。
例如：f("ab","ba")= "aa", f("nzwzl","zizez")="niwel".
她现在有两个相同长度的只有小写字母的字符串 x,y。找出任何一个满足 f(x,z)=y 的
字符串 z。如果找不到这样的字符串的话，请输出-1。
## 输入格式
第一行给出以下两个字符串的长度 n。
第二行给出一个字符串 x。
第三行给出一个字符串 y。
## 输出格式
第一行输出一个字符串，代表你找到的符合条件的字符串。找不到的话，请输出-1。
## 样例 #1
### 样例输入 #1
```
2
ab
aa
```
### 样例输出 #1
```
ba
```
## 样例 #2
### 样例输入 #2
```
5
nzwzl
niwel
```
### 样例输出 #2
```
xiyez
```
## 样例 #3
### 样例输入 #3
```
2
ab
ba
```
### 样例输出 #3
```
-1
```
## 提示
对于 100%的数据，1<=n<=100。*/

// #include <iostream>
// using namespace std;
int umi(){
	int i=0,a;
	char x[110]={0},y[110]={0},z[110]={0};
	cin>>a;
	cin>>x;
	cin>>y;
	for(int i=0;i<a;i++){
		if(y[i]<=x[i])
			z[i]=y[i];
		else{
			cout<<-1;
			return 0;
		}	
	}
	for(int i=0;i<a;i++){
		cout<<z[i];
	}
	return 0;
}
/*
# [NOIP2008 普及组] ISBN 号码
## 题目描述
每一本正式出版的图书都有一个 ISBN 号码与之对应，ISBN 码包括 $9$ 位数字、$1$ 位识别码和 $3$ 位分隔符，其规定格式如 `x-xxx-xxxxx-x`，其中符号 `-` 就是分隔符（键盘上的减号），最后一位是识别码，例如 `0-670-82162-4`就是一个标准的 ISBN 码。ISBN 码的首位数字表示书籍的出版语言，例如 $0$ 代表英语；第一个分隔符 `-` 之后的三位数字代表出版社，例如 $670$ 代表维京出版社；第二个分隔符后的五位数字代表该书在该出版社的编号；最后一位为识别码。
识别码的计算方法如下：
首位数字乘以 $1$ 加上次位数字乘以 $2$ ……以此类推，用所得的结果 $ \bmod 11$，所得的余数即为识别码，如果余数为 $10$，则识别码为大写字母 $X$。例如 ISBN 号码 `0-670-82162-4` 中的识别码 $4$ 是这样得到的：对 `067082162` 这 $9$ 个数字，从左至右，分别乘以 $1,2,\dots,9$ 再求和，即 $0\times 1+6\times 2+……+2\times 9=158$，然后取 $158 \bmod 11$ 的结果 $4$ 作为识别码。
你的任务是编写程序判断输入的 ISBN 号码中识别码是否正确，如果正确，则仅输出 `Right`；如果错误，则输出你认为是正确的 ISBN 号码。
## 输入格式
一个字符序列，表示一本书的 ISBN 号码（保证输入符合 ISBN 号码的格式要求）。
## 输出格式
一行，假如输入的 ISBN 号码的识别码正确，那么输出 `Right`，否则，按照规定的格式，输出正确的 ISBN 号码（包括分隔符 `-`）。
## 样例 #1
### 样例输入 #1
```
0-670-82162-4
```
### 样例输出 #1
```
Right
```
## 样例 #2
### 样例输入 #2
```
0-670-82162-0
```
### 样例输出 #2
```
0-670-82162-4
```
## 提示
2008 普及组第一题*/
// #include <iostream>
// using namespace std;
int ISBN(){
	int i=0,j=0,a=0;
	char h[15]={0};
	cin.getline(h,15);
	while(j<12){
		if(h[j]>='0' && h[i]<='9'){
			a+=(h[j]-'0')*(i+1);
			i++;
		}
		j++;
	}
	if(a%11==10 && h[12]=='X'){
		cout<<"Right";
	}
	else if(a%11==h[12]-'0'){
		cout<<"Right";
	}
	else{
		if(a%11==10){
			h[12]='X';
		}
		else{
			h[12]=char(a%11+'0');
		}
		cout<<h;
	}
		
	return 0;
}
/*
# [USACO1.1]你的飞碟在这儿Your Ride Is Here
## 题目描述
众所周知，在每一个彗星后都有一只 UFO。这些 UFO 时常来收集地球上的忠诚支持者。不幸的是，他们的飞碟每次出行都只能带上一组支持者。因此，他们要用一种聪明的方案让这些小组提前知道谁会被彗星带走。他们为每个彗星起了一个名字，通过这些名字来决定这个小组是不是被带走的那个特定的小组（你认为是谁给这些彗星取的名字呢？）。关于如何搭配的细节会在下面告诉你；你的任务是写一个程序，通过小组名和彗星名来决定这个小组是否能被那颗彗星后面的 UFO 带走。

小组名和彗星名都以下列方式转换成一个数字：最终的数字就是名字中所有字母的积，其中 $\texttt A$ 是 $1$，$\texttt Z$ 是 $26$。例如，$\texttt{USACO}$ 小组就是 $21 \times 19 \times 1 \times 3 \times 15=17955$。如果小组的数字 $\bmod 47$ 等于彗星的数字 $\bmod 47$,你就得告诉这个小组需要准备好被带走！（记住“$a \bmod b$”是 $a$ 除以 $b$ 的余数，例如 $34 \bmod 10$ 等于 $4$）

写出一个程序，读入彗星名和小组名并算出用上面的方案能否将两个名字搭配起来，如果能搭配，就输出 `GO`，否则输出 `STAY`。小组名和彗星名均是没有空格或标点的一串大写字母（不超过 $6$ 个字母）。
## 输入格式
第1行：一个长度为 $1$ 到 $6$ 的大写字母串，表示彗星的名字。
第2行：一个长度为 $1$ 到 $6$ 的大写字母串，表示队伍的名字。
## 输出格式
## 样例 #1
### 样例输入 #1
```
COMETQ
HVNGAT
```
### 样例输出 #1
```
GO
```
## 样例 #2
### 样例输入 #2
```
ABSTAR
USACO
```
### 样例输出 #2
```
STAY
```
## 提示
题目翻译来自 NOCOW。
USACO Training Section 1.1*/

int your_ride_is_here() { 
    
    
    return 0;
    }
int main(){
        bi_sort();
    most_char();
    encode_password();
    freind_string();
    match_jian_ji_lian();
    str_replace();
    find_once_char();
    jiyin_relation();
    stone_scissors_paper();
    str_cmp_loose();
    umi();
    ISBN();
    your_ride_is_here();
    
    return 0;
}