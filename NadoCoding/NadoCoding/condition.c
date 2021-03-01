# include <stdio.h>
# include <stdlib.h> // standard library 난수, 변수, 메모리 등 라이브러리
# include <time.h> // 난수 생성을 위한 라이브러리

int main_condition(void)
{
	// 조건문 
	// if (조건) { 내용 } / else if / else

	//int age;
	//printf("당신은 몇 살 입니까?");
	//scanf_s("%d", &age);
	//
	//if (age < 8) 
	//{
	//	printf("어린이 입니다.");
	//}

	//else if (age >= 8 && age < 13)
	//{
	//	printf("초등학생 입니다.");
	//}
	//
	//else if (age >= 14 && age < 17)
	//{
	//	printf("중학생 입니다.");
	//}

	//else if (age >= 17 && age < 20)
	//{
	//	printf("고등학생 입니다.");
	//}

	//else
	//{
	//	printf("성인 입니다.");
	//}

	//for (int i = 1; i <= 10; i++)
	//{
	//	if (i >= 6 && i <= 10)
	//	{
	//		if (i == 7)
	//		{
	//			printf("%d번 학생은 결석 입니다.\n", i);
	//			continue; //break은 loof를 벗어남 //continue는 건너띄고 다음으로
	//		}
	//		printf("%d번 학생은 발표하세요.\n", i);

	//	}
	//}

	// and 와 or   &&  ||

	//int a = 1;
	//int b = 1;
	//int c = 2;
	//int d = 3;

	//if (a == b || c == d) 
	//{
	//	printf("a, b 혹은 c, d는 같습니다.\n");

	//}
	//else
	//{
	//	printf("서로 다릅니다.\n");
	//}

	// 가위 바위 보 (난수 생성)
	//srand(time(NULL));

	//int i = rand() %3; // 0~2까지의 난수

	//if (i == 0)
	//{
	//	printf("가위\n");
	//}
	//else if (i == 1)
	//{
	//	printf("바위\n");
	//}
	//else if (i == 2)
	//{
	//	printf("보\n");
	//}
	//else
	//	printf("몰라요\n");

	// switch case
	//int i = rand() % 3; // 0~2 사이 값 반환
	//switch (i)
	//{
	//case 0: printf("가위\n"); break; // break가 없으면 반환된 아래 case 모두 출력함
	//case 1: printf("바위\n"); break;
	//case 2: printf("보\n"); break;
	//default: printf("몰라요\n");
	//}

	// Switch Case 응용 버스 카드
	
	//int age = 12;

	//switch(age)
	//{
	//	case 8: // 이 아래는 break를 만나기 전까지 모두 출력함
	//	case 9: // 빈 공간은 아무것도 출력하지 않음
	//	case 10:
	//	case 11:
	//	case 12: 
	//	case 13: printf("초등학생 입니다.\n"); break;
	//	case 14:
	//	case 15:
	//	case 16: printf ("중학생 입니다.\n"); break;
	//	case 17:
	//	case 18:
	//	case 19: printf ("고등학생 입니다.\n"); break;
	//	default: printf ("학생이 아닙니다.\n"); break;
	//}

	// UP and DOWN 숫자 맞추기 게임
srand(time(NULL));

int num = rand() % 100 + 1; // 1~100까지 랜덤 숫자 반환
int answer;
int chance = 5;

while (1) // 1 : 참   0: 거짓    1로하면 while 아래 문장 모두 수행함
// 조건 chance > 0 으로도 가능
{
	printf("남은 기회는 %d\n\n", chance--);
	//chance--; 밖에 따로 쓰기 가능
	printf("num : %d\n", num);
	printf("숫자를 맞춰 보세요. (1~100)\n");
	scanf_s("%d", &answer);

	if (num > answer)
	{
		printf("UP ↑\n");
	}
	else if (num < answer)
	{
		printf("DOWN ↓\n");
	}
	else if (num == answer)
	{
		printf("정답 입니다.\n");
		break;
	}
	if (chance == 0) // 조건이 chance > 0 이라면 불 필요함. 1 일 경우 무한 루프 탈출용.
	{
		printf("기회가 모두 소진 되었습니다.\n");
		break;
	}
}


	return 0;
}
