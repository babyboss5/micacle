#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Word_Size 100000
static int count=0,space=0, number=0, wrap_num=0; //单词个数,空格个数，数字个数，行数
int LENGTH = 0;                                   //串长度
char w[Word_Size];
FILE *fp;
void wordCount();
void show();

void main(){
	fp = fopen("2.txt", "r");
	if (fp == NULL){
		printf("open error!......\n" );
		exit(0);
	}
	wordCount();
	fclose(fp);
	show();
	getchar();
}
void wordCount(){
	int word;
	fseek(fp, 00, SEEK_END);       //将文件指针指向末尾
	LENGTH = ftell(fp);            //取文件长度
	rewind(fp);                    //将文件指针重新指向文件头
	fread(w, sizeof(char), LENGTH, fp);  //将文件字符全部读取到w数组中
	for (int i = 0; i<=LENGTH; i++){
		if (w[i] == ' '){
			space++;
		}
		else if (w[i]== '\n'){
			wrap_num++;
		}
		else if (w[i]>= '1'&&w[i]<= '9'){
			number++;
		}
		else if ((w[i] >= 'a'&&w[i] <= 'z' || w[i] >= 'A'&&w[i] <= 'Z') && (w[i + 1] == ' ' || w[i + 1] == '\n' || w[i + 1] == '\0') && (w[i-1] >= 'a'&&w[i-1] <= 'z' || w[i-1] >= 'A'&&w[i-1] <= 'Z')){
			count++;
		}
	}
}

void show(){
	printf("单词数：%d\n", count);
	if (LENGTH == 0){
		printf("行数：%d\n", wrap_num);
	}
	else{
		printf("行数：%d\n", wrap_num + 1);
	}
	printf("字符数：%d\n",LENGTH-wrap_num);
	printf("空格字数：%d\n", space);
	printf("数字个数：%d\n", number);
}