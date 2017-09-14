#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
using namespace std;

int Language;
int i, n, m, k;
char ch;
double user_answer = 0, answer = 0;
int rc = 0, wc = 0;
void cheak();
char Operator()
{
	int i;
	i = rand() % 4 + 1;
	switch (i)
	{
	case 1: return '+';
	case 2: return '-';
	case 3: return '*';
	case 4: return '/';
	}
}

void integer()
{
	int x = 0, y = 0;
	char op;
	x = rand() % 100 + 1;
	y = rand() % 100 + 1;
	op = Operator();
	if (op == '-')
		while (x < y)
		{
			x = rand() % 100 + 1;
			y = rand() % 100 + 1;
		}
	cout << x << op << y << "=";
	cin >> user_answer;
	switch (op)
	{
	case '+':
		answer = x + y; break;
	case '-':
		answer = x - y; break;
	case '*':
		answer = x*y; break;
	case '/':
		answer = x/y; break;
	}
	cheak();
}

void fraction()
{
	int a, b, c, d;
	a = rand() % 100 + 1;
	b = rand() % 100 + 1;
	c = rand() % 100 + 1;
	d = rand() % 100 + 1;
	char op;
	while (a <= b || c <= d)
	{
		a = rand() % 100 + 1;
		b = rand() % 100 + 1;
		c = rand() % 100 + 1;
		d = rand() % 100 + 1;
	}
	op = Operator();
	if (op == '-')
		while ((b*c - a*d)<0)
		{
			a = rand() % 100 + 1;
			b = rand() % 100 + 1;
			c = rand() % 100 + 1;
			d = rand() % 100 + 1;
		}
	cout << "(" <<b << "/" << a <<")"<< op <<"(" <<d << "/" << c<< ")" << "=";
	cin >> user_answer;
	switch (op)
	{
	case '+':
		answer = (b / a) + (d / c); break;
	case '-':
		answer = (b / a )- (d / c); break;
	case '*':
		answer = (b / a) * (d / c); break;
	case '/':
		answer = (b*c)/(a*d); break;
	}
	cheak();
}

void cheak()
{
	if (user_answer == answer){
		cout << "your answer is right" << endl;
		rc++;
	}
	else{
		cout << "you answer is wrong" << endl;
		wc++;
	}
}
void eng(){
	cout << "Please type the question type " << endl;
	cout << "1.Integer four arithmetic " << endl;
	cout << "2.Fractional four arithmetic " << endl;
	cin >> i;
	system("cls");
	cout << "Please enter the number of questions" << endl;
	cin >> n;
	for (m = 0; m < n; m++){
		if (i == 1)
			integer();
		else
			fraction();
	}
	k = rc - wc;
	if (k >= 5)
		cout << "Your grades are... " << k;
	else if (k >0 && k < 5)
		cout << "You're not bad " << endl;
	else
		cout << "You're hopeless!" << endl;
	cout << "Whether to continue? ";
	cin >> ch;
	while (ch == 'y' || ch == 'Y'){
		system("cls");
		cout << "Please type the question type " << endl;
		cout << "1.Integer four arithmetic " << endl;
		cout << "2.Fractional four arithmetic " << endl;
		cin >> i;
		system("cls");
		cout << "Please enter the number of questions" << endl;
		cin >> n;
		for (m = 0; m < n; m++){
			if (i == 1)
				integer();
			else
				fraction();
		}
		k = rc - wc;
		if (k >= 5)
			cout << "Your grades are... " << k;
		else if (k >0 && k < 5)
			cout << "You're not bad " << endl;
		else
			cout << "You're hopeless!" << endl;
		cout << "Whether to continue? ";
		cin >> ch;
	}
	return;
}
void chi(){
	cout << "请输入出题类型" << endl;
	cout << "1.整数四则运算" << endl;
	cout << "2.分数四则运算" << endl;
	cin >> i;
	system("cls");
	cout << "请输入题目个数" << endl;
	cin >> n;
	for (m = 0; m < n; m++){
		if (i == 1)
			integer();
		else
			fraction();
	}
	k = rc - wc;
	if (k >= 5)
		cout << "你的成绩为" << k;
	else if (k >0 && k < 5)
		cout << "你还不赖" << endl;
	else
		cout << "你没救了" << endl;
	cout << "是否继续";
	cin >> ch;
	while (ch == 'y' || ch == 'Y'){
		system("cls");
		cout << "请输入出题类型" << endl;
		cout << "1.整数四则运算" << endl;
		cout << "2.分数四则运算" << endl;
		cin >> i;
		system("cls");
		cout << "请输入题目个数" << endl;
		cin >> n;
		for (m = 0; m < n; m++){
			if (i == 1)
				integer();
			else
				fraction();
		}
		k = rc - wc;
		if (k >= 5)
			cout << "你的成绩为" << k;
		else if (k >0 && k < 5)
			cout << "你还不赖" << endl;
		else
			cout << "你没救了" << endl;
		cout << "是否继续";
		cin >> ch;
	}
	return;
}
void jap(){
	cout << "出題タイプを入力して下さい " << endl;
	cout << "1.整数４演算" << endl;
	cout << "2.分数４演算" << endl;
	cin >> i;
	system("cls");
	cout << "題目を入力して下さい " << endl;
	cin >> n;
	for (m = 0; m < n; m++){
		if (i == 1)
			integer();
		else
			fraction();
	}
	k = rc - wc;
	if (k >= 5)
		cout << "君の成績は" << k;
	else if (k >0 && k < 5)
		cout << "君はまだ悪くない " << endl;
	else
		cout << "君は愚かに死んでしまった " << endl;
	cout << "継続するかどうか ";
	cin >> ch;
	while (ch == 'y' || ch == 'Y'){
		system("cls");
		cout << "出題タイプを入力して下さい " << endl;
		cout << "1.整数４演算" << endl;
		cout << "2.分数４演算" << endl;
		cin >> i;
		system("cls");
		cout << "題目を入力して下さい " << endl;
		cin >> n;
		for (m = 0; m < n; m++){
			if (i == 1)
				integer();
			else
				fraction();
		}
		k = rc - wc;
		if (k >= 5)
			cout << "君の成績は" << k;
		else if (k >0 && k < 5)
			cout << "君はまだ悪くない " << endl;
		else
			cout << "君は愚かに死んでしまった " << endl;
		cout << "継続するかどうか ";
		cin >> ch;
	}
	return;
}
void main()
{
	srand(time(0));
	cout << "please select language" << endl;
	cout << "1,English" << endl;
	cout << "2,chinese" << endl;
	cout << "3,japanese" << endl;
	cin >> Language;
	switch (Language){
	case 1: eng(); break;
	case 2: chi(); break;
	case 3: jap(); break;
	}
	system("pause");
}