#define _CRT_SECURE_NO_WARNINGS
#define SIZE 100
#include <stdio.h>
#include <string.h>
/*
���ڿ��� �Է¹޾� �빮�ڷ� ��ȯ�ϴ� �Լ� str_upper(char *s) �ۼ�
*/
void str_upper(char* s) {
	int i;

	for (i = 0; i < strlen(s); i++) {						//strlen() �Լ��� �Է¹��� ���ڿ��� ���̸� ���, string ��������� �ʿ�� ��
		if (s[i] >= 97 && s[i] <= 122) s[i] -= 32;			//�ƽ�Ű �ڵ尪 65~90�� �빮�� 97~122�� �ҹ���, �� ���� ���̴� 32
	}
}

int main() {
	char str[SIZE];
	printf("���ڿ� �Է� : ");
	gets(str);

	str_upper(str);

	printf("��ȯ�� ���ڿ� : %s\n",str);

	return 0;
}