# include <stdio.h>

// 함수 선언
void p(int number); // void 비어있다 -> 반환 값이 없다.
// void 함수이름(int num1, float num2, char c);   ->  전달 값을 여러개를 받을 수 있다.

void function_without_return();

int function_with_return();

// 전달 값이 있는 함수
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

	// 전달값과 반환 값이 모두 있는 함수
	//int ret = apple(5, 3);
	
	printf("사과 %d개 중에 %d를 먹으면 %d개가 남습니다.\n", 5, 3, apple(5, 3)); // 함수 직접 대입 가능

	return 0;
}

// 함수 정의
void p(int number)
{
	printf("num = %d\n", number);
}


// int 함수이름(int num);
//{
//		return num + 4;   -> num를 받으면 num +4로 반환 한다.
//}
// 메인 함수 위에 선언 해줘야한다.


// return이 없는 함수
void function_without_return()
{
	printf("반환값이 없습니다.\n");
}

// return이 있는 함수
int function_with_return()
{
	return 10;
}

void fuction_with_params(int num1, int num2, int num3)
{
	printf("전달값이 있습니다. 전달 받은 값은 %d, %d, %d 입니다.\n", num1, num2, num3);
}

int apple(int total, int ate)
{
	printf("전달값이 있는 함수 입니다.\n");
	return total - ate;
}