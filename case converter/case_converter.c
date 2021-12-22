#define _CRT_SECURE_NO_WARNINGS
#define SIZE 100
#include <stdio.h>
#include <string.h>
/*
문자열을 입력받아 대문자로 변환하는 함수 str_upper(char *s) 작성
*/
void str_upper(char* s) {
	int i;

	for (i = 0; i < strlen(s); i++) {						//strlen() 함수로 입력받은 문자열의 길이를 계산, string 헤더파일을 필요로 함
		if (s[i] >= 97 && s[i] <= 122) s[i] -= 32;			//아스키 코드값 65~90은 대문자 97~122는 소문자, 이 둘의 차이는 32
	}
}

int main() {
	char str[SIZE];
	printf("문자열 입력 : ");
	gets(str);

	str_upper(str);

	printf("변환된 문자열 : %s\n",str);

	return 0;
}