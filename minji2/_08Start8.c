#include <stdio.h>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")

int main8()
{
	while (1) {
		int flag;
		printf("재생시킬 번호를 누르세요(종료0):");
		scanf_s("%d", &flag);
		PlaySound(NULL, 0, 0);
		Sleep(10);
		if (flag == 0) {
			PlaySound(NULL, 0, 0);
			Sleep(10);
			printf("음악프로그램을 종료합니다.\n");
			break;
			
		}
		else if (flag == 1) {
			printf("1번 재생.\n");
			PlaySound(TEXT("C:\\sound1.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
			Sleep(10);
		}
		else if (flag == 2) {
			printf("2번 재생.\n");
			PlaySound(TEXT("C:\\sound2.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
			Sleep(10);
		}
		else {
			continue;
		}
	}
	return 0;
}

