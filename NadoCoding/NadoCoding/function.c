# include <stdio.h>

// �Լ� ����
void p(int number); // void ����ִ� -> ��ȯ ���� ����.
// void �Լ��̸�(int num1, float num2, char c);   ->  ���� ���� �������� ���� �� �ִ�.

void function_without_return();

int function_with_return();

// ���� ���� �ִ� �Լ�
void fuction_with_params(int num1, int num2, int num3);

int apple(int total, int ate);

int main_function(void)
{
	//int num = 2;
	////printf("num = %d\n", num);
	//p(num);

	//num += 4; // num = num + 4
	////printf("num = %d\n", num); // 6
	//p(num);

	//num -= 2; // num = num - 2
	////printf("num = %d\n", num); // 4
	//p(num);

	//num *= 3; // num = num * 3
	////printf("num = %d\n", num); // 12
	//p(num);

	//num /= 6; // num = num / 6
	////printf("num = %d\n", num); // 2
	//p(num);

	//function_without_return();

	//int ret = function_with_return();
	//p(ret);

	//fuction_with_params(34, 5, 6);

	// ���ް��� ��ȯ ���� ��� �ִ� �Լ�
	//int ret = apple(5, 3);
	
	printf("��� %d�� �߿� %d�� ������ %d���� �����ϴ�.\n", 5, 3, apple(5, 3)); // �Լ� ���� ���� ����

	return 0;
}

// �Լ� ����
void p(int number)
{
	printf("num = %d\n", number);
}


// int �Լ��̸�(int num);
//{
//		return num + 4;   -> num�� ������ num +4�� ��ȯ �Ѵ�.
//}
// ���� �Լ� ���� ���� ������Ѵ�.


// return�� ���� �Լ�
void function_without_return()
{
	printf("��ȯ���� �����ϴ�.\n");
}

// return�� �ִ� �Լ�
int function_with_return()
{
	return 10;
}

void fuction_with_params(int num1, int num2, int num3)
{
	printf("���ް��� �ֽ��ϴ�. ���� ���� ���� %d, %d, %d �Դϴ�.\n", num1, num2, num3);
}

int apple(int total, int ate)
{
	printf("���ް��� �ִ� �Լ� �Դϴ�.\n");
	return total - ate;
}