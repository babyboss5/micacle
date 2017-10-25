#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PeopleNum 10
typedef struct play{
	int pnum;				//玩家编号
	int snum;				//玩家输入的数字
	int score;
}Player;
Player p[PeopleNum];
int count = 1;
double gold = 0.0;
void input();
float getgold();
void resetscore();
void print();
void input(){
	for (int i = 0; i < PeopleNum; i++){
		p[i].pnum = i + 1;
X:		printf("第%d号：", i + 1);
		scanf_s("%d", &p[i].snum);
		for (int j = 0; j < i; j++){
			if (p[i].snum == p[j].snum){
				printf("数字重复，请重新输入：");
				goto X;
			}
		}
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
	double count[PeopleNum];				//计算差值后存放的数组
	for (int i = 0; i < PeopleNum; i++){
		count[i] = fabs(p[i].snum - gold);				//差值取绝对值
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
		printf("%d号选手得分：%d", p[i].pnum, p[i].score);
		printf("\n");
	}
}
void main(){
	int ch;
	printf("-------------------------黄金点游戏-------------------------\n");
	while (1){
		input();
		gold = getgold() / PeopleNum*(0.618);
		resetscore();
		system("cls");
		print();
		printf("是否继续1");
		scanf_s("%d", &ch);
		if (ch == 1){
			count++;
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
			printf("恭喜第%d号玩家获胜", j + 1);
			printf("总共的游戏局数为：%d", count);
			getchar();				//读取一个enter键，否者直接退出程序
			getchar();
			exit(0);
		}
	}
}
