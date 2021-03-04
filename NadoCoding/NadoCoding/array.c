# include <stdio.h>

int main_array(void)
{
	// 배열을 만들어 봅시다.

	//int subway_array[3]; // 3 array 생성 index는 0부터 시작
	//subway_array[0] = 10; // 0 index 값 정의
	//subway_array[1] = 20;
	//subway_array[2] = 30;

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("%d호선 열차의 인원은 %d명 입니다.\n", i + 1, subway_array[i]);
	//}

	// 값을 직접 입력
	//int arr[5] = { 1, 2, 3, 4, 5 }; // 값을 부족하게 넣어주면 뒤는 0을 반환
	//	for (int i = 0; i < 5; i++)
	//	{
	//		printf("%d호선 열차의 인원은 %d명 입니다.\n", i + 1, arr [i]);
	//	}


	//int arr[] = {1, 2, 3}; // int arr[5] 와 같음
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d호선 열차의 인원은 %d명 입니다.\n", i + 1, arr[i]);
	//}

	// float 값
	//float arr[5] = {1.25, 2.0f, 3.0, 4.0, 5.0};
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d호선 열차의 인원은 %.2f명 입니다.\n", i + 1, arr[i]);
	//}


	// 문자 문자열
	//char c = 'A';
	//printf("%c", c);
	//
	//char str[6] = "coding"; // [c][o][d][i][n][g] -> 오류 발생 문자열의 끝을 알리는 NULL 문자 \0를 넣어줘야함.
	//printf("%s", str);

	//char str[] = "coding"; // [c][o][d][i][n][g][\0]
	//printf("%s\n", str);
	//printf("%d", sizeof(str));
	//printf("%c", str[6]); //\0 출력 -> 아무 것도 안나옴
	//
	//for (int i = 0; i < sizeof(str); i++)
	//{
	//	printf("%c\n", str[2*i]);
	//}

	//char kor[] = "나도코딩";
	//
	//printf("%d\n", sizeof(kor)); // 한글은 1글자 당 2byte => 9

	//char c_array[] = { 'c', 'o', 'd', 'i', 'n', 'g', '\0'};
	//printf("%s", c_array);

	// 아스키코드(ASCII) 미국 ANSI 표준 정보 교환용 7비트 부호체계 -> 문자나 숫자 등을 코드(숫자)로 받는다.
	// 0~127까지 128개의 부호가 있다.
	// 모든 아스키코드 찾아보괴

	for (int i = 0; i < 128; i++)
	{
		printf("아스키코드 %d  :  %c\n", i, i);
	}

	return 0;
}