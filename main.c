#include <stdio.h>


int main()
{
	
	printf("Ű : %.1fcm\n", 173.5);
	printf("���� : %d��\n", 29);
	printf("������ : %.2fcm\n", 68.375);
	printf("�÷� : %d\n", 10/2);

	
	printf("12\t3456789\n");
	printf("12\t34\r56789\n");
	printf("12\t34\r56\b789\n");
	printf("12\t34\r56\b78\a9\n");

	int age;

	age = 3;
	printf("age : %d\n", age);

	float fff;
	fff = 3.14;
	printf("fff : %.4f\n", fff);


	char ccc;
	ccc = 'X';
	printf("ccc : %c\n",ccc);

	char sss[25] = "abd, as";
	printf("sss : %s\n", sss);

	//����, Ű, ���� ������ ���

	int nai = 29;
	float ki = 173.56;
	char sung = 'M';
	printf("���� : %d\n", nai);
	printf("Ű : %.1f\n", ki);
	printf("���� : %c\n", sung);

	int cc = 10;
	float bb = 15.3;
	float kk = cc + bb;
	printf("%f", kk);

	int ss = 10 / 3;
	float dd = 10 / 3;
	// ��ǲ�� ������ ������ ����̹Ƿ� ������� dd�� 3���� ����ȴ�.
	//����� �ƴ϶� ��ǲ�� ������.
	printf("����/���� %d\n", ss);
	printf("����/���� %f\n", dd);

	printf("%f\n", cc + 10.3);
	printf("%d\n", cc + 10.3);//���Ĺ��ڸ� ����ߵȴ�.

	const int iii = 30;
	printf("%d\n", iii);
	
	printf("\n\n");

	//�������� ������ ����� 
	//���� : ���Ĺ��� ���, ������ 1���� ���,
	//printf �ڵ� ��ȭ�Ұ�(�����ϰ� 9������ϳ� ��� �ٸ��� ���) 
	int m;
	m = 1;
	printf("������ 2�� 2 * %d = %d\n",m, 2 * m);
	m = 2;				   
	printf("������ 2�� 2 * %d = %d\n", m, 2 * m);
	m = 3;				   
	printf("������ 2�� 2 * %d = %d\n", m, 2 * m);
	m = 4;				   
	printf("������ 2�� 2 * %d = %d\n", m, 2 * m);
	m = 5;				   
	printf("������ 2�� 2 * %d = %d\n", m, 2 * m);
	m = 6;				   
	printf("������ 2�� 2 * %d = %d\n", m, 2 * m);
	m = 7;				   
	printf("������ 2�� 2 * %d = %d\n", m, 2 * m);
	m = 8;				   
	printf("������ 2�� 2 * %d = %d\n", m, 2 * m);
	m = 9;				   
	printf("������ 2�� 2 * %d = %d\n", m, 2 * m);

	printf("--------------------------------\n");

	for (int i = 1; i <= 9; i++)
	{
		printf("���� 3�� 3*%d = %d\n", i, 3 * i);
	}

	
	system("pause");//����� �������� exe ������ �� �Ͻ����� ������.
}