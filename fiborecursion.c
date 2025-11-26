#include<stdio.h>
int tribo(int n){
	if(n==0 || n==1) return 0;
	if(n==2) return 1;
	int ans1 = tribo(n-1);
	int ans2 = tribo(n-2);
	int ans3 = tribo(n-3);
     return ans1 + ans2 + ans3;
     
}
int main(){
	int n;
	printf("Enter the number:");
	scanf("%d", &n);
	int x = tribo(n);
	printf("%d", x);
	return 0;
}
