#include <stdio.h>


int main()
{
	
	printf("키 : %.1fcm\n", 173.5);
	printf("나이 : %d세\n", 29);
	printf("몸무게 : %.2fcm\n", 68.375);
	printf("플롯 : %d\n", 10/2);

	
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

	//나이, 키, 성별 변수로 출력

	int nai = 29;
	float ki = 173.56;
	char sung = 'M';
	printf("나이 : %d\n", nai);
	printf("키 : %.1f\n", ki);
	printf("성별 : %c\n", sung);

	int cc = 10;
	float bb = 15.3;
	float kk = cc + bb;
	printf("%f", kk);

	int ss = 10 / 3;
	float dd = 10 / 3;
	// 인풋이 정수와 정수의 계산이므로 결과값이 dd는 3으로 저장된다.
	//결과가 아니라 인풋에 따른다.
	printf("정수/정수 %d\n", ss);
	printf("정수/정수 %f\n", dd);

	printf("%f\n", cc + 10.3);
	printf("%d\n", cc + 10.3);//서식문자를 맞춰야된다.

	const int iii = 30;
	printf("%d\n", iii);
	
	printf("\n\n");

	//연습문제 구구단 만들기 
	//조건 : 서식문자 사용, 변수는 1개만 사용,
	//printf 코드 변화불가(동일하게 9번사용하나 모두 다르게 출력) 
	int m;
	m = 1;
	printf("구구단 2단 2 * %d = %d\n",m, 2 * m);
	m = 2;				   
	printf("구구단 2단 2 * %d = %d\n", m, 2 * m);
	m = 3;				   
	printf("구구단 2단 2 * %d = %d\n", m, 2 * m);
	m = 4;				   
	printf("구구단 2단 2 * %d = %d\n", m, 2 * m);
	m = 5;				   
	printf("구구단 2단 2 * %d = %d\n", m, 2 * m);
	m = 6;				   
	printf("구구단 2단 2 * %d = %d\n", m, 2 * m);
	m = 7;				   
	printf("구구단 2단 2 * %d = %d\n", m, 2 * m);
	m = 8;				   
	printf("구구단 2단 2 * %d = %d\n", m, 2 * m);
	m = 9;				   
	printf("구구단 2단 2 * %d = %d\n", m, 2 * m);

	printf("--------------------------------\n");

	for (int i = 1; i <= 9; i++)
	{
		printf("뀨뀨단 3단 3*%d = %d\n", i, 3 * i);
	}

	
	system("pause");//디버그 폴더에서 exe 실행할 때 일시정지 시켜줌.
}