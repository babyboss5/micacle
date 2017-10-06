#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PeopleNum 10
typedef struct play{
	int pnum;				//��ұ��
	int snum;				//������������
	int score;
}Player;
Player p[PeopleNum];
double gold = 0.0;
void input();
float getgold();
void resetscore();
void print();
void input(){
	for (int i = 0; i < PeopleNum; i++){
		p[i].pnum = i + 1;
		printf("��%d�ţ�", i + 1);
		scanf_s("%d", &p[i].snum);
	}
}
float getgold(){
	float g = 0;
	for (int i = 0; i < PeopleNum; i++){
		g += p[i].snum;
	}
	return g;
}
void resetscore(){
	double min = 10000, max = 0;
	int in_j = 0, in_k = 0;
	double count[PeopleNum];				//�����ֵ���ŵ�����
	for (int i = 0; i < PeopleNum; i++){
		count[i] = fabs(p[i].snum - gold);				//��ֵȡ����ֵ
	}
	for (int m = 0; m < PeopleNum; m++){
		if (count[m] <= min){
			min = count[m];
			in_j = m;
		}
	}
	for (int n = 0; n < PeopleNum; n++){
		if (count[n] >= max){
			max = count[n];
			in_k = n;
		}
	}
	p[in_j].score = p[in_j].score + 2;
	p[in_k].score = p[in_k].score - 2;
}
void print(){
	for (int i = 0; i < PeopleNum; i++){
		printf("%d��ѡ�ֵ÷֣�%d", p[i].pnum, p[i].score);
		printf("\n");
	}
}
void main(){
	int ch;
	printf("-------------------------�ƽ����Ϸ-------------------------\n");
	while (1){
		input();
		gold = getgold() / PeopleNum*(0.618);
		resetscore();
		system("cls");
		print();
		printf("�Ƿ����1");
		scanf_s("%d", &ch);
		if (ch == 1){

		}
		else{
			int p_max = 0;
			int j;
			for (int i = 0; i < PeopleNum; i++){
				if (p[i].score > p_max){
					p_max = p[i].score;
					j = i;
				}
			}
			printf("��ϲ��%d����һ�ʤ", j + 1);
			getchar();				//��ȡһ��enter��������ֱ���˳�����
			getchar();           
			exit(0);
		}
	}
}