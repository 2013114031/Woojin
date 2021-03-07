# include <stdio.h>
# include <time.h>
# include <stdlib.h>

int main_array_project(void)
{
// 아빠는 대머리 프로젝트
// 번호의 조합을 3번 보여준다.(랜덤으로)
// 정답을 선택시 맞췄습니다. 틀리면 틀렸습니다.

	
	srand(time(NULL));
	int treatment = rand() % 4; // 발모제 index 랜덤 생성(0~3)
	int currentshowcount = 0; // 이번에 보여줄 약품 수
	int preshowcount = 0; // 전에 보여준 약품의 수
	int answer; // 정답 응답.

	// 정답률을 높이기 위해서 보여줄 약품의 수를 달게 한다. pre가 2면 current가 3번

	for (int i = 0; i < 3; i++) // 3번의 약품 기회
	{
		int bottle[4] = {0, 0, 0, 0};
		do {
			currentshowcount = rand() % 2 + 2; // 2~3개의 갯수를 보여준다.
		} while (currentshowcount == preshowcount);  // pre와 current가 같으면 계속 반복 -> 달라질 때 까지 랜덤 수 생성
		preshowcount = currentshowcount; // 다음번에 같은 갯수를 표기하는 중복을 막음.
		int isinclude = 0; // 발모제 포함 여부

		printf("%d째 기회.\n\n", i+1);

		for (int j = 0; j < currentshowcount; j++) // 발모제 위치 선택
		{
			int randombottle = rand() % 4; // 선택이 안되어있다면 선택해준다.
			if (bottle[randombottle] == 0)
			{
				bottle[randombottle] = 1;

				if (randombottle == treatment)
				{
					isinclude = 1; // 발모제가 포함되어 있다면 
				}
			}
			else
			{
				j--; // 중복 방지를 위해서 선택 되어 있다면 다시 반복한다.(기회를 돌림.)
			}
		}
		// 사용자에게 보여주기

			for (int k = 0; k < 4; k++)
			{
				if (bottle[k] == 1)
				{
					printf("%d ", k + 1);
				}
			}
			printf("번 약을 사용했습니다.\n");

			if (isinclude == 1)
			{
				printf(">> 성공! 머리가 자라났어요! \n\n");
			}
			else
			{
				printf(">> 실패! 머리가 자라지 않았어요! \n\n");
			}

			printf("계속하려면 아무키나 누르세요.\n");
			getchar(); // puase 역할로 사용한다. (루프 사이에 멈춤을 줌)
	}
	printf("정답은 몇 번 일까요?\n\n");
	
	scanf_s("%d", &answer);
	
	if (answer == treatment + 1) 
	{
		printf("정답 입니다! \n\n");
	}

	else
	{
		printf("틀렸습니다! \n 정답은 %d", treatment + 1); 
	}

	return 0;
}