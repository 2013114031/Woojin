# include <stdio.h>

int main_array(void)
{
	// �迭�� ����� ���ô�.

	//int subway_array[3]; // 3 array ���� index�� 0���� ����
	//subway_array[0] = 10; // 0 index �� ����
	//subway_array[1] = 20;
	//subway_array[2] = 30;

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("%dȣ�� ������ �ο��� %d�� �Դϴ�.\n", i + 1, subway_array[i]);
	//}

	// ���� ���� �Է�
	//int arr[5] = { 1, 2, 3, 4, 5 }; // ���� �����ϰ� �־��ָ� �ڴ� 0�� ��ȯ
	//	for (int i = 0; i < 5; i++)
	//	{
	//		printf("%dȣ�� ������ �ο��� %d�� �Դϴ�.\n", i + 1, arr [i]);
	//	}


	//int arr[] = {1, 2, 3}; // int arr[5] �� ����
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%dȣ�� ������ �ο��� %d�� �Դϴ�.\n", i + 1, arr[i]);
	//}

	// float ��
	//float arr[5] = {1.25, 2.0f, 3.0, 4.0, 5.0};
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%dȣ�� ������ �ο��� %.2f�� �Դϴ�.\n", i + 1, arr[i]);
	//}


	// ���� ���ڿ�
	//char c = 'A';
	//printf("%c", c);
	//
	//char str[6] = "coding"; // [c][o][d][i][n][g] -> ���� �߻� ���ڿ��� ���� �˸��� NULL ���� \0�� �־������.
	//printf("%s", str);

	//char str[] = "coding"; // [c][o][d][i][n][g][\0]
	//printf("%s\n", str);
	//printf("%d", sizeof(str));
	//printf("%c", str[6]); //\0 ��� -> �ƹ� �͵� �ȳ���
	//
	//for (int i = 0; i < sizeof(str); i++)
	//{
	//	printf("%c\n", str[2*i]);
	//}

	//char kor[] = "�����ڵ�";
	//
	//printf("%d\n", sizeof(kor)); // �ѱ��� 1���� �� 2byte => 9

	//char c_array[] = { 'c', 'o', 'd', 'i', 'n', 'g', '\0'};
	//printf("%s", c_array);

	// �ƽ�Ű�ڵ�(ASCII) �̱� ANSI ǥ�� ���� ��ȯ�� 7��Ʈ ��ȣü�� -> ���ڳ� ���� ���� �ڵ�(����)�� �޴´�.
	// 0~127���� 128���� ��ȣ�� �ִ�.
	// ��� �ƽ�Ű�ڵ� ã�ƺ���

	for (int i = 0; i < 128; i++)
	{
		printf("�ƽ�Ű�ڵ� %d  :  %c\n", i, i);
	}

	return 0;
}