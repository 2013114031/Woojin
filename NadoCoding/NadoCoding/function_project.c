# include <stdio.h>
# include <time.h>
# include <stdlib.h> // srand, rand

int getRandomnumber(int number);

void main_fuction_projects()
{
	// 비밀번호를 맞춰봅니다.
	// 5번의 기회 / num1 x num2 = ?
	
	srand(time(NULL)); // 초 단위로 randon seed 생성
	
	int count = 0;

	for (int i = 1; i <= 5; i++)
	{
		int answer = 0;

		int num1 = getRandomnumber(i);
		int num2 = getRandomnumber(i);

		printf("######## %d번째 문제 입니다. ###########\n\n", i);
		printf("%d x %d = ?  (-1 = 종료) \n\n", num1, num2);
		scanf_s("%d", &answer);

			if(answer == num1 * num2)
			{
				printf("정답 입니다.\n");
				count++;
			}

		// 위쪽을 우선으로 실행함 -> 틀렸습니다. 아래 있을 시 -1 종료가 작동 안됨.
			else if (answer == -1)
			{
				printf("프로그램을 종료 합니다. \n");
				exit(0);
			}

			else if (answer != num1 * num2)
			{
				printf("틀렸습니다. \n");
			}

	}
	printf("총 맞춘 개수는 %d개 입니다. \n",count);
	

	return 0;
}

int getRandomnumber(int i)
{
	return rand() %(i*7) +1; // i*(0~6) +1 숫자
	// rand로 srand에서 뽑아씀(초 단위로 변하는 랜덤 숫자)
}