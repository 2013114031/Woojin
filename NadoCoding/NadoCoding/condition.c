# include <stdio.h>
# include <stdlib.h> // standard library ����, ����, �޸� �� ���̺귯��
# include <time.h> // ���� ������ ���� ���̺귯��

int main_condition(void)
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

	//for (int i = 1; i <= 10; i++)
	//{
	//	if (i >= 6 && i <= 10)
	//	{
	//		if (i == 7)
	//		{
	//			printf("%d�� �л��� �Ἦ �Դϴ�.\n", i);
	//			continue; //break�� loof�� ��� //continue�� �ǳʶ�� ��������
	//		}
	//		printf("%d�� �л��� ��ǥ�ϼ���.\n", i);

	//	}
	//}

	// and �� or   &&  ||

	//int a = 1;
	//int b = 1;
	//int c = 2;
	//int d = 3;

	//if (a == b || c == d) 
	//{
	//	printf("a, b Ȥ�� c, d�� �����ϴ�.\n");

	//}
	//else
	//{
	//	printf("���� �ٸ��ϴ�.\n");
	//}

	// ���� ���� �� (���� ����)
	//srand(time(NULL));

	//int i = rand() %3; // 0~2������ ����

	//if (i == 0)
	//{
	//	printf("����\n");
	//}
	//else if (i == 1)
	//{
	//	printf("����\n");
	//}
	//else if (i == 2)
	//{
	//	printf("��\n");
	//}
	//else
	//	printf("�����\n");

	// switch case
	//int i = rand() % 3; // 0~2 ���� �� ��ȯ
	//switch (i)
	//{
	//case 0: printf("����\n"); break; // break�� ������ ��ȯ�� �Ʒ� case ��� �����
	//case 1: printf("����\n"); break;
	//case 2: printf("��\n"); break;
	//default: printf("�����\n");
	//}

	// Switch Case ���� ���� ī��
	
	//int age = 12;

	//switch(age)
	//{
	//	case 8: // �� �Ʒ��� break�� ������ ������ ��� �����
	//	case 9: // �� ������ �ƹ��͵� ������� ����
	//	case 10:
	//	case 11:
	//	case 12: 
	//	case 13: printf("�ʵ��л� �Դϴ�.\n"); break;
	//	case 14:
	//	case 15:
	//	case 16: printf ("���л� �Դϴ�.\n"); break;
	//	case 17:
	//	case 18:
	//	case 19: printf ("����л� �Դϴ�.\n"); break;
	//	default: printf ("�л��� �ƴմϴ�.\n"); break;
	//}

	// UP and DOWN ���� ���߱� ����
srand(time(NULL));

int num = rand() % 100 + 1; // 1~100���� ���� ���� ��ȯ
int answer;
int chance = 5;

while (1) // 1 : ��   0: ����    1���ϸ� while �Ʒ� ���� ��� ������
// ���� chance > 0 ���ε� ����
{
	printf("���� ��ȸ�� %d\n\n", chance--);
	//chance--; �ۿ� ���� ���� ����
	printf("num : %d\n", num);
	printf("���ڸ� ���� ������. (1~100)\n");
	scanf_s("%d", &answer);

	if (num > answer)
	{
		printf("UP ��\n");
	}
	else if (num < answer)
	{
		printf("DOWN ��\n");
	}
	else if (num == answer)
	{
		printf("���� �Դϴ�.\n");
		break;
	}
	if (chance == 0) // ������ chance > 0 �̶�� �� �ʿ���. 1 �� ��� ���� ���� Ż���.
	{
		printf("��ȸ�� ��� ���� �Ǿ����ϴ�.\n");
		break;
	}
}


	return 0;
}
