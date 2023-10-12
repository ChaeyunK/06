#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(int n)
{

	int res = 1;
	int i;
	for(i=1; i<=n; i++)
		res*=i;
	
	
	return res;
}

int combination(int n, int r)
{
	int div1, div2; 
	
	div1 = factorial(n);//n! -> 위에 팩토리얼 함수 짜기
	div2 = factorial(n-r) * factorial(r);
	//분자 분모 나누기 연산
	return (div1/div2);
}


int main(int argc, char *argv[]) {

//1. 입력값 받음
	int n;
	int r;
	int div1, div2; //div1분자 div2분모
	int result;
	
	printf("input n : ");
	scanf("%d", &n);
	
	printf("input r : ");
	scanf("%d", &r);
	
//2. 분모/분자 계산
	result = combination(n, r);
	
	
//3. 최종 값 출력	

	//result=div1/div2;
	//이 나누는 부분은 2번에서 포함됨
	printf("result is %i\n", result);

	system("PAUSE");
	return 0;
}