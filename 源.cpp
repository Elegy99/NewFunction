/*
sqrt()
#include<iostream>
#include<cmath>//需要头文件
using namespace std;
int main()
{
	double c;
	cout << "c=";
	cin >> c;//程序自上而下进行，应先对c赋值

	double t = sqrt(c);//等号后部分为函数调用，，括号内为参数（可以是数字、字符或嵌套）
	cout << "平方根为：" << t << endl;
}

*/


/*pow()
#include<iostream>
#include<cmath>
#include<iomanip>//控制精度的控制符所在头文件
using namespace std;
int main()
{
	long double a,b;
	cout << "a=";
	cin >> a;
	cout << "b="                                      ;
	cin >> b;

	double t = pow(a,b);
	cout << fixed << setprecision(5);//控制精度
	cout << "a的b次方为：" << t << "（保留五位小数）"<<endl;
}
*/


#include <iostream>
#include <cstdlib> // rand() 和 srand()
#include <ctime>   // time()
using namespace std;

int main() 
{
	// 1. 设置随机数种子，用当前时间作为种子，保证每次运行结果不同
	srand((unsigned)time(NULL));

	// 2. 生成随机数
	int num = rand();
	cout << "随机数: " << num << endl;

	cin.get();

	return 0;
}