#include<stdio.h>
/*
----------SO NGUYEN TO------------------
int isPrime(int n){
	if(n < 2) return 0;
	int i;
	for(i = 2; i < n; i++){
		if(n % i == 0) return 0;
	}
	return 1;
}
---------------BUBBLE SORT - BE --> LON -----
void sort(int a[], int n){
	int i, j;
	int temp;
	for(i = 0; i < n-1; i++){
		for(j = n -1 ; j > 0; j--){
			if(a[j] < a[j-1]){
				temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}
}
---------------NHAP MANG--------------------
	int n;
	scanf("%d", &n);
	
	int a[100];
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
------TACH CHUOI THANH TU, TRA VE SO LUONG TU----
int changeToWords(char words[][100], char s[]){
	int i;
	int count = 0;
	for(i = 0; i < strlen(s); i++){
		int j = 0;
		while(s[i] != ' ' && s[i] != '\0'){
			words[count][j] =  s[i];
			j++;
			i++;
		}
		words[count][j] = '\0';
		count++;
	}
	return count;
}
-----WORDS SORT----------------------------
void sortWords(char s[][100], int n){
	 int i, j;
	 char *str;
	 for(i = 0; i < n-1; i++){
		for(j = n- 1; j > i; j--){
			if(strcmp(s[j], s[j-1]) == -1){
				strcpy(str, s[j]);
				strcpy(s[j], s[j-1]);
				strcpy(s[j-1], str);
			}
		}
	}
}
unsigned long long frac(int n){
	if(n == 0 || n == 1) return 1;
	int i;unsigned long long product = 1;
	for(i = 2; i <= n; i++){
		product *= i;
	}
	return product;
}
*/

void sort(int a[], int n){
	int i, j;
	int temp;
	for(i = 0; i < n-1; i++){
		for(j = n -1 ; j > 0; j--){
			if(a[j] > a[j-1]){
				temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}
}
int main(){
	int n;
	scanf("%d", &n);
	
	int a[100];
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	sort(a, n);
	for(i = 0; i < n; i++){
		if(a[i] % 2 == 0)
		printf("%d\n", a[i]);
	}
	return 0;
}

