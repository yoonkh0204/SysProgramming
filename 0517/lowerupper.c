#include <stdio.h>
#include <stdlib.h>
int main() {
	char ch;
	while(1){
		printf("문자 입력 : ");
		scanf(" %c", &ch);
		if(ch>='A'&&ch<='Z'){
			printf("%c의 소문자는 %c입니다.\n",ch,ch+32);
		}
		else if(ch>='a'&&ch<='z'){
			printf("%c의 대문자는 %c입니다.\n",ch,ch-32);
		}
		else if(ch=='0') break;
	}
	exit(0);
}
