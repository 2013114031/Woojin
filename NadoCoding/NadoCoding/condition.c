# include <stdio.h>

int main(void)
{
	// ���ǹ� 
	// if (����) { ���� } / else if / else
	
	//int age;
	//printf("����� �� �� �Դϱ�?");
	//scanf_s("%d", &age);
	//
	//if (age < 8) 
	//{
	//	printf("��� �Դϴ�.");
	//}

	//else if (age >= 8 && age < 13)
	//{
	//	printf("�ʵ��л� �Դϴ�.");
	//}
	//
	//else if (age >= 14 && age < 17)
	//{
	//	printf("���л� �Դϴ�.");
	//}

	//else if (age >= 17 && age < 20)
	//{
	//	printf("����л� �Դϴ�.");
	//}

	//else
	//{
	//	printf("���� �Դϴ�.");
	//}
	
	for (int i = 1; i <= 10; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d�� �л��� �Ἦ �Դϴ�.\n", i);
				continue; //break�� loof�� ��� //continue�� �ǳʶ�� ��������
			}
			printf("%d�� �л��� ��ǥ�ϼ���.\n", i);

		}
	}
	return 0;
}
