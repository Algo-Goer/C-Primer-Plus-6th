#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
int main(void){
	char c;
	int n_letters=0,n_words=0;//n_letters:字母数，n_words:单词数
	bool inword=false;//一个flag，如果c在单词中，inword等于true
	
	while((c=getchar())!=EOF){
		if(islower(c)||isupper(c))n_letters++;//若是大写字母或者小写字母，则字母数加1
		if(!isspace(c)&&!ispunct(c)&&!inword){//若c不为空格，不为标点符号，不在单词中
			inword=true;
			n_words++;
		}
		if(inword&&(isspace(c)||ispunct(c)))//若c不在单词中，是空格或者标点符号
		   inword=false;
}
	printf("平均每个单词的字母数为%f",(double)n_letters/(double)n_words);
	
	return 0;
}