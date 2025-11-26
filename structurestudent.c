#include<stdio.h>
#include<string.h>
struct student {
	char firstname [20];
	int age;
	char lastname[20];
	int standard;
};

int main() {
	struct student s1;
    scanf("%d", &s1.age);         
    scanf("%19s", &s1.firstname);
    scanf("%19s", &s1.lastname);   
    scanf("%d", &s1.standard); 

	
	printf("%d %s %s %d", s1.age, s1.firstname, s1.lastname,s1.standard);
	return 0;
}
