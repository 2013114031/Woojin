# include <stdio.h>
# include <time.h>
# include <stdlib.h>

int main_array_project(void)
{
// �ƺ��� ��Ӹ� ������Ʈ
// ��ȣ�� ������ 3�� �����ش�.(��������)
// ������ ���ý� ������ϴ�. Ʋ���� Ʋ�Ƚ��ϴ�.

	
	srand(time(NULL));
	int treatment = rand() % 4; // �߸��� index ���� ����(0~3)
	int currentshowcount = 0; // �̹��� ������ ��ǰ ��
	int preshowcount = 0; // ���� ������ ��ǰ�� ��
	int answer; // ���� ����.

	// ������� ���̱� ���ؼ� ������ ��ǰ�� ���� �ް� �Ѵ�. pre�� 2�� current�� 3��

	for (int i = 0; i < 3; i++) // 3���� ��ǰ ��ȸ
	{
		int bottle[4] = {0, 0, 0, 0};
		do {
			currentshowcount = rand() % 2 + 2; // 2~3���� ������ �����ش�.
		} while (currentshowcount == preshowcount);  // pre�� current�� ������ ��� �ݺ� -> �޶��� �� ���� ���� �� ����
		preshowcount = currentshowcount; // �������� ���� ������ ǥ���ϴ� �ߺ��� ����.
		int isinclude = 0; // �߸��� ���� ����

		printf("%d° ��ȸ.\n\n", i+1);

		for (int j = 0; j < currentshowcount; j++) // �߸��� ��ġ ����
		{
			int randombottle = rand() % 4; // ������ �ȵǾ��ִٸ� �������ش�.
			if (bottle[randombottle] == 0)
			{
				bottle[randombottle] = 1;

				if (randombottle == treatment)
				{
					isinclude = 1; // �߸����� ���ԵǾ� �ִٸ� 
				}
			}
			else
			{
				j--; // �ߺ� ������ ���ؼ� ���� �Ǿ� �ִٸ� �ٽ� �ݺ��Ѵ�.(��ȸ�� ����.)
			}
		}
		// ����ڿ��� �����ֱ�

			for (int k = 0; k < 4; k++)
			{
				if (bottle[k] == 1)
				{
					printf("%d ", k + 1);
				}
			}
			printf("�� ���� ����߽��ϴ�.\n");

			if (isinclude == 1)
			{
				printf(">> ����! �Ӹ��� �ڶ󳵾��! \n\n");
			}
			else
			{
				printf(">> ����! �Ӹ��� �ڶ��� �ʾҾ��! \n\n");
			}

			printf("����Ϸ��� �ƹ�Ű�� ��������.\n");
			getchar(); // puase ���ҷ� ����Ѵ�. (���� ���̿� ������ ��)
	}
	printf("������ �� �� �ϱ��?\n\n");
	
	scanf_s("%d", &answer);
	
	if (answer == treatment + 1) 
	{
		printf("���� �Դϴ�! \n\n");
	}

	else
	{
		printf("Ʋ�Ƚ��ϴ�! \n ������ %d", treatment + 1); 
	}

	return 0;
}