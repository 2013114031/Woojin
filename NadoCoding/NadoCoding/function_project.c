# include <stdio.h>
# include <time.h>
# include <stdlib.h> // srand, rand

int getRandomnumber(int number);

void main_fuction_projects()
{
	// ��й�ȣ�� ���纾�ϴ�.
	// 5���� ��ȸ / num1 x num2 = ?
	
	srand(time(NULL)); // �� ������ randon seed ����
	
	int count = 0;

	for (int i = 1; i <= 5; i++)
	{
		int answer = 0;

		int num1 = getRandomnumber(i);
		int num2 = getRandomnumber(i);

		printf("######## %d��° ���� �Դϴ�. ###########\n\n", i);
		printf("%d x %d = ?  (-1 = ����) \n\n", num1, num2);
		scanf_s("%d", &answer);

			if(answer == num1 * num2)
			{
				printf("���� �Դϴ�.\n");
				count++;
			}

		// ������ �켱���� ������ -> Ʋ�Ƚ��ϴ�. �Ʒ� ���� �� -1 ���ᰡ �۵� �ȵ�.
			else if (answer == -1)
			{
				printf("���α׷��� ���� �մϴ�. \n");
				exit(0);
			}

			else if (answer != num1 * num2)
			{
				printf("Ʋ�Ƚ��ϴ�. \n");
			}

	}
	printf("�� ���� ������ %d�� �Դϴ�. \n",count);
	

	return 0;
}

int getRandomnumber(int i)
{
	return rand() %(i*7) +1; // i*(0~6) +1 ����
	// rand�� srand���� �̾ƾ�(�� ������ ���ϴ� ���� ����)
}