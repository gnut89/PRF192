#include <stdio.h>
#include <stdlib.h>

int findGCD(int n, int m); //find greaest common divisor
int findLCM(int n, int m); //find least common multiplie
int main(int argc, char *argv[]) {
	//=== Do not add new or change statements in the main function.===
	system("cls");
	printf("\nTEST Q1 (2 marks):\n");
	int n, m;
	printf("Please enter two positive integer n and m to find GCD, LCM: ");
	scanf("%d%d", &n,&m);

	//=== The output will be used to mark your program.===============
	printf("\nOUTPUT:\n");
	printf("%-5d%-5d", findGCD(n,m),findLCM(n,m));
	printf("\n");
	system ("pause");
	return 0;
}
//-----------------------------------------------
int findLCM(int n, int m) {
	int result;
	//Begin your codes here=====================
	
	//End your codes============================
	return result;
}
//-----------------------------------------------
int findGCD(int n, int m) {
	if (n == 0 || m == 0){
        return n + m;
    }
	while(n!=m) {
		if(n>m)
			n-=m;
		else
			m-=n;
	}
	return n;
}

