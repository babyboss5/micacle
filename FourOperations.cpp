#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<iomanip>
using namespace std;

int Language;
int i, n, m, k;
char ch;
float user_answer = 0, answer = 0;
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
	float x , y ;
	char op;
	x =(float)( rand() % 100 + 1);
	y =(float)( rand() % 100 + 1);
	op = Operator();
	if (op == '-')
		while (x < y)
		{
			x = (float)(rand() % 100 + 1);
			y = (float)(rand() % 100 + 1);
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
		answer = (int)((x / y)*100)/100.0; break;
	}
	cheak();
}

void fraction()
{
	float a, b, c, d;
	a = (float)(rand() % 100 + 1);
	b = (float)(rand() % 100 + 1);
	c = (float)(rand() % 100 + 1);
	d = (float)(rand() % 100 + 1);
	char op;
	while (a <= b || c <= d)
	{
		a = (float)(rand() % 100 + 1);
		b = (float)(rand() % 100 + 1);
		c = (float)(rand() % 100 + 1);
		d = (float)(rand() % 100 + 1);
	}
	op = Operator();
	if (op == '-')
		while ((b*c - a*d)<0)
		{
			a = (float)(rand() % 100 + 1);
			b = (float)(rand() % 100 + 1);
			c = (float)(rand() % 100 + 1);
			d = (float)(rand() % 100 + 1);
		}
	cout << "(" <<b << "/" << a <<")"<< op <<"(" <<d << "/" << c<< ")" << "=";
	cin >> user_answer;
	switch (op)
	{
	case '+':
		answer =(int)(((b / a) + (d / c))*100)/100.0; break;
	case '-':
		answer =(int)(((b / a )- (d / c))*100)/100.0; break;
	case '*':
		answer =(int)(((b / a) * (d / c))*100)/100.0; break;
	case '/':
		answer =(int)(((b*c)/(a*d))*100)/100.0; break;
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
		cout << "Whether to continue?(Y/y) ";
		cin >> ch;
	}
	return;
}
void chi(){
	cout << "-------------------------------------------------------------------------------------" << endl;
	cout << "-" << setw(50) << "请输入出题类型" << setw(34) << "-" << endl;
	cout << "-" << setw(50) << "1.整数四则运算" << setw(34) << "-" << endl;
	cout << "-" << setw(50) << "2.分数四则运算" << setw(34) << "-" << endl;
	cin >> i;
	system("cls");
	cout << "-" << setw(50) << "请输入题目个数" << setw(34) << "-" << endl;
	cin >> n;
	for (m = 0; m < n; m++){
		if (i == 1)
			integer();
		else
			fraction();
	}
	k = rc - wc;
	if (k >= 2)
		cout << "你的成绩为" << k;
	else if (k >0 && k < 2)
		cout << "你还不赖" << endl;
	else
		cout << "你没救了" << endl;
	cout << "是否继续";
	cin >> ch;
	while (ch == 'y' || ch == 'Y'){
		system("cls");
		cout << "-------------------------------------------------------------------------------------" << endl;
		cout << "-" << setw(50) << "请输入出题类型" << setw(34) << "-" << endl;
		cout << "-" << setw(50) << "1.整数四则运算" << setw(34) << "-" << endl;
		cout << "-" << setw(50) << "2.分数四则运算" << setw(34) << "-" << endl;
		cin >> i;
		system("cls");
		cout << "-" << setw(50) << "请输入题目个数" << setw(34) << "-" << endl;
		cin >> n;
		for (m = 0; m < n; m++){
			if (i == 1)
				integer();
			else
				fraction();
		}
		k = rc - wc;
		if (k >= 5)
			cout << "你的成绩为" << k << endl;
		else if (k >0 && k < 4)
			cout << "你还不赖" << endl;
		else
			cout << "你没救了" << endl;
		cout << "是否继续(Y/y)";
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
		cout << "継続するかどうか(Y/y) ";
		cin >> ch;
	}
	return;
}
void main()
{
	srand(time(0));
	cout << "-------------------------------------------------------------------------------------" << endl;
	cout << "-"<<setw(61) << "Welcome to use Four arithmetic programs" <<setw(23)<<"-"<< endl;
	cout << "-"<<setw(53)<<"please select language"<<setw(31)<<"-"<< endl;
	cout << "-"<<setw(45)<<"1,English" <<setw(39)<<"-"<< endl;
	cout << "-"<<setw(45)<<"2,chinese" <<setw(39)<<"-"<< endl;
	cout << "-"<<setw(46)<<"3,japanese"<<setw(38)<<"-"<< endl;
	cin >> Language;
	system("cls");
	switch (Language){
	case 1: eng(); break;
	case 2: chi(); break;
	case 3: jap(); break;
	}
	system("pause");
}
