#include<stdio.h>
int stairs(int n){
     if(n==1 || n==2) return n;
    int totalways = stairs(n-1) + stairs(n-2);
    return totalways;
}
int main(){
	int n;
	printf("Enter the number:");
	scanf("%d", &n);
	int x = stairs(n);
	printf("%d", x);
	return 0;
}
