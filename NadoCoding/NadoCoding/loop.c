# include <stdio.h>

int main_loop(void) {
	
	//int a = 1;
	//printf("a = %d\n", a);
	//printf("a = %d\n", ++a); // ++a�� ���� ���� +1�� ���ش�.
	//printf("a = %d\n", a++); // a++�� ������ ��ģ �� +1�� ���ش�.
	//
	//int b = 1;
	//printf("Hello World %d\n", b++);
	//printf("Hello World %d\n", b++);
	//printf("Hello World %d\n", b++);
	//printf("Hello World %d\n", b++);
	//printf("Hello World %d\n", b++);
	//printf("Hello World %d\n", b++);
	//printf("Hello World %d\n", b++);
	//printf("Hello World %d\n", b++);
	//printf("Hello World %d\n", b++);

	// �ݺ��� for, while do while
	// for (����; ����; ����;){ }
	/*for (int i = 1; i <= 10; i++) {
	
		printf("Hello World %d\n", i);
	}*/

	// while (����) { }
	//int i = 1;
	//while (i <= 10) {
	//	printf("Hello World %d\n", i++);
	//	// i++ �ۿ� ���൵ ��
	//}

	// do { } while (����)
	/*int i = 1;
	do {
		printf("Hello World %d\n", i++);
	} while (i <= 10);*/

	// ���� �ݺ������� ������ �����
	/*for (int i = 2; i <= 9; i++)
	{
		printf("%d ��\n", i);
		for (int j = 1; j <= 9; j++)
		{
			printf("  %d X %d = %d\n", i, j, i * j);
		}
	}*/
	
	// ���� �ݺ��� Ȱ�� �� �����
	/*for (int i = 0; i < 5; i++)
	{
	 	for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	// �Ųٷ� �� �����
	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = i; j < 5 - 1; j++)
	//	{
	//		printf(" ");
	//	}
	//	for (int k = 0; k <= i; k++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	// �Ƕ�̵� ����� ������Ʈ
		printf("�� ���� �װڽ��ϱ�?\n");
		int floor;
		scanf_s("%d", &floor);

		for (int i = 0; i < floor; i++)
		{
			for (int j = i; j < floor - 1; j++)
			{
				printf(" ");
			}
			for (int k = 0; k < 2 * i + 1; k++)
			{
				printf("*");
			}
			printf("\n");
		}

	return 0;

}