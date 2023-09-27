#include <iostream>
using namespace std;

int in_two_int(){
//    cout <<"测试cin,cin会忽略掉非可见字符， 如果没有添加任何判断推出，只有遇到ctrl z时cin才会退出出"<<endl;
    cout<<"test cin >> two int, if no adding any break condition, will break when ctrl z" <<endl;
    int a,b;
    while(cin>>a>>b){
        cout<<a<<endl;
        cout<<b<<endl;
    }
    return 0;
}

int in_char_arr(){
//    cout<< "测试cin 到 char[10],时用 get()判断回车结束，但每次判断会跳过一个字符"<<endl;
    cout<<"test cin >> char[10], with get() to check \\n, but get() will read one char" <<endl;
    char A[10]={0};
    int i = 0;
    char c;
    while(cin>>A[i]){
        c = cin.get();
        if( c == '\n')
            break;
        i += 1;
    }
    for(int j=0;j<i+1;j++)
        cout<<A[j]<<endl;
    return 0;
}

int in_int_arr(){
//    cout<< "测试cin 到 int[10],时用 get()判断回车结束，这时每次get（）判断会跳过一个字符对int输入没影响-？"<<endl;
    cout<<"test cin >> int[10], with get() to check return,get() read one char, but it is ok" <<endl;
    int A[10]={0};
    int i = 0;
    char c;
    while(cin>>A[i]){
        
        c = cin.get();
        if( c == '\n')
            break;
        i += 1;
    }
    for(int j=0;j<i+1;j++)
        cout<<A[j]<<endl;
    return 0;
}


#include <string>

int in_str() {
//    cout<< "测试cin 到 string,时用 get()判断回车结束，get（）每次判断会跳过一个字符，这时没有影响-？"<<endl;
    cout<<"test cin >> str, with get() to check return,get() read one char, but it is ok" <<endl;
     string str;
     while (cin >> str ) {
         cout << str << endl;
         if (cin.get()== '\n')
             break;
     }
     return 0;
}

int in_str_lines() {
    //    cout<< "测试cin 到 string,时用 get()判断回车结束，get（）每次判断会跳过一个字符，这时没有影响-？"<<endl;
    cout<<"test cin >> str multi lines of string, first line is total line number" <<endl;
    cout<<"please input the lines number"<<endl;
    
    int line;
    cin >>line;
    cin.get();
    string str[line];
    for(int i=0;i<line;i++)
    {
        getline(cin,str[i]);
        cout << str[i] << endl;
    }

    return 0;
}

int in_int_lines(){
    //    cout<< "测试cin 到 int[10],时用 get()判断回车结束，这时每次get（）判断会跳过一个字符对int输入没影响-？"<<endl;
    cout<<"test cin >> multi line int array, first line is the total line number" <<endl;
     cout<<"please input the lines number"<<endl;
     int line;
     cin >>line;
     cin.get();
     
    int A[line][10]={0};
    int i = 0, j=0 , k=0;
    char c;
    for(i=0;i<line;i++){
        //TODO
        j = 0;
        while(cin>>A[i][j]){          
            c = cin.get();
            if( c == '\n')
            {
                for(k=0;k<=j;k++){
                    cout<<A[i][k]<<" ";
                }
                cout<<endl;
                break;
            }
                
            j += 1;
        }
    }
      return 0;
}

int main()
{
   
    in_char_arr();
    in_int_arr();    
    in_str();//http://c.biancheng.net/view/2236.html
    in_str_lines();
    in_int_lines();
    
    in_two_int(); 
    return 0;
}
