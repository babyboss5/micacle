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
	cout << "�������������" << endl;
	cout << "1.������������" << endl;
	cout << "2.������������" << endl;
	cin >> i;
	system("cls");
	cout << "��������Ŀ����" << endl;
	cin >> n;
	for (m = 0; m < n; m++){
		if (i == 1)
			integer();
		else
			fraction();
	}
	k = rc - wc;
	if (k >= 5)
		cout << "��ĳɼ�Ϊ" << k;
	else if (k >0 && k < 5)
		cout << "�㻹����" << endl;
	else
		cout << "��û����" << endl;
	cout << "�Ƿ����";
	cin >> ch;
	while (ch == 'y' || ch == 'Y'){
		system("cls");
		cout << "�������������" << endl;
		cout << "1.������������" << endl;
		cout << "2.������������" << endl;
		cin >> i;
		system("cls");
		cout << "��������Ŀ����" << endl;
		cin >> n;
		for (m = 0; m < n; m++){
			if (i == 1)
				integer();
			else
				fraction();
		}
		k = rc - wc;
		if (k >= 5)
			cout << "��ĳɼ�Ϊ" << k;
		else if (k >0 && k < 5)
			cout << "�㻹����" << endl;
		else
			cout << "��û����" << endl;
		cout << "�Ƿ����";
		cin >> ch;
	}
	return;
}
void jap(){
	cout << "���}�����פ����������¤��� " << endl;
	cout << "1.����������" << endl;
	cout << "2.����������" << endl;
	cin >> i;
	system("cls");
	cout << "�}Ŀ�����������¤��� " << endl;
	cin >> n;
	for (m = 0; m < n; m++){
		if (i == 1)
			integer();
		else
			fraction();
	}
	k = rc - wc;
	if (k >= 5)
		cout << "���γɿ���" << k;
	else if (k >0 && k < 5)
		cout << "���Ϥޤ������ʤ� " << endl;
	else
		cout << "�����ޤ�������Ǥ��ޤä� " << endl;
	cout << "�@�A���뤫�ɤ��� ";
	cin >> ch;
	while (ch == 'y' || ch == 'Y'){
		system("cls");
		cout << "���}�����פ����������¤��� " << endl;
		cout << "1.����������" << endl;
		cout << "2.����������" << endl;
		cin >> i;
		system("cls");
		cout << "�}Ŀ�����������¤��� " << endl;
		cin >> n;
		for (m = 0; m < n; m++){
			if (i == 1)
				integer();
			else
				fraction();
		}
		k = rc - wc;
		if (k >= 5)
			cout << "���γɿ���" << k;
		else if (k >0 && k < 5)
			cout << "���Ϥޤ������ʤ� " << endl;
		else
			cout << "�����ޤ�������Ǥ��ޤä� " << endl;
		cout << "�@�A���뤫�ɤ��� ";
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