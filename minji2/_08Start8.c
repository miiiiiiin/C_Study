#include <stdio.h>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")

int main8()
{
	while (1) {
		int flag;
		printf("�����ų ��ȣ�� ��������(����0):");
		scanf_s("%d", &flag);
		PlaySound(NULL, 0, 0);
		Sleep(10);
		if (flag == 0) {
			PlaySound(NULL, 0, 0);
			Sleep(10);
			printf("�������α׷��� �����մϴ�.\n");
			break;
			
		}
		else if (flag == 1) {
			printf("1�� ���.\n");
			PlaySound(TEXT("C:\\sound1.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
			Sleep(10);
		}
		else if (flag == 2) {
			printf("2�� ���.\n");
			PlaySound(TEXT("C:\\sound2.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
			Sleep(10);
		}
		else {
			continue;
		}
	}
	return 0;
}
