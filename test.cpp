#include<iostream>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
//test
//计算字符串转换成整数，字符串长度不超过9
int trans(char c[], int len)
{
	int value = 0, bitval;
	int i = len - 1;
	while (i >= 0 && c[i] >= 48 && c[i] <= 57)
	{
		bitval = (c[i] - '0') * pow(10, len - 1 - i);
		value += bitval;
	    i--;
	}
	if (i < 0) return value;
	cout << "error input!" << endl;
	return 0;
}
//fibonacci数列
int fib(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	int i = 0, a = 0, b = 1, tmp;
	while (i < n - 1)
	{
		tmp = a + b;
		a = b;
		b = tmp;
		i++;
	}
	return b;
	//递归方法，栈溢出
	//return fib(n - 1) + fib(n - 2);
}
union 
{
	int i;
	char x[4];
}a;
int func(int x)
{
	int countx = 0;
	while(x)
	{
		++countx;
		x = x & (x - 1);
	}
	return countx;
}
int foo(int a, int b, int &c)
{
	int d = 0;
	if (a >= b)
	{
		d = a - b;
	}
	else
	{
		return a;
	}
	if(d >= 0)
	{
		c++;
		return foo(d, b, c);
	}
	else
	{
		c++;
		return 0;
	}

}
int Fun(int &a)
{
	return a++;
}
int main(){
	//输出字符串
	/*char c[10];
	cin >> c;
	int len = strlen(c);
	
	if (len > 9) 
	{
		cout << "error input!" << endl;
		return 0;
	}	
	cout << trans(c, len) << endl;*/
    //输出斐波那契数列
	//cout << fib(100000) << endl;
    /*a.x[0] = 600;
	a.x[1] = 0;
	a.x[2] = 0;
	a.x[3] = 0;*/
	//cout << a.i % 60 << endl;
	//printf("%2d", a.i);
	//cout << func(2014) << endl;
	/*char *p = "TrendMicro";
	char **q = &p;
	*q = "programming test";
	char *r = ++p;
	p = "talents.";
	int c = 0;
	int d = foo(100, 7, c);
	printf("d = %d\n", d);
	int a = 1;
	cout << a*Fun(a) << endl;
	int a = 3, b = 2, c = 1, d = 0;
	d = (0, c = a, 1, a = b, 2, b = c);
	cout << a << ' ' << b << ' ' << c << ' ' << d << endl; */
	srand(time(0));
	cout << rand()%100 << endl;
	char *p = "ABDSDF";
	int *q;
	cout << strlen(p) << endl;
	return 0;
}
