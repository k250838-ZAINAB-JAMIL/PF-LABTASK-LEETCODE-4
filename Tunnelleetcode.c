#include <stdio.h>
#define MAX_HEIGHT 41  

void processBoxes(int n) {
    if (n == 0) return;
    int length, width, height;
    scanf("%d %d %d", &length, &width, &height);

    if (height < MAX_HEIGHT) {
        int volume = length * width * height;
        printf("%d\n", volume);
    }
    processBoxes(n - 1);
}

int main() {
    int n;
    scanf("%d", &n); 

    processBoxes(n); 
    return 0;
}
