#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char 아이디[32]="minji0526";
	char 비밀번호[41]="minji0526";
	char 이름[32]="김민지";
	int 생년월일= 20030526;
	char 성별='F';
	char 휴대전화[32]="010-2553-8105";

	while (1) {
		printf("아이디를 입력하세요: ");			// 출력
		scanf("%s", &아이디);						// 입력
		printf("비밀번호를 입력하세요: ");
		scanf("%s", &비밀번호);
		printf("이름을 입력하세요: ");
		scanf("%s", &이름);
		printf("생년월일을 입력하세요: ");
		scanf("%d", &생년월일);
		printf("성별을 입력하세요: ");
		scanf("%c", &성별);
		scanf("%c", &성별);
		printf("휴대전화를 입력하세요: ");
		scanf("%s", &휴대전화);

		printf("\n\n========================\n");
		printf("ID: %s\nPW: %s\n이름: %s\n생년월일: %d\n성별:%c\n휴대번호:%s\n", 아이디, 비밀번호, 이름, 생년월일, 성별, 휴대전화);
	}

	return 0;
}

// 키 float, %f
// 이력서 : 이름, 학력, 생년월일, 키, 발사이즈