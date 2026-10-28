#include <stdio.h>

int main() {
    int n = 5;

    // Pattern 1: Simple Right-Angled Triangle (Stars)
    // Outer loop rows control karta hai, inner loop har row ke stars.
  
    printf("1. Simple Star Triangle\n");
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n"); // New line after each row
    }
    printf("\n");

    
    // Pattern 2: Inverted Right-Angled Triangle (Stars)
    // Row loop ulta chalega (n se 1 tak) kyunki triangle reverse hai.
    
    printf("2. Inverted Star Triangle\n");
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    
    // Pattern 3: Number Triangle (Row Number)
    // Star print karne ki jagah current row variable 'i' print karenge.
  
    printf("3. Number Triangle (Repeating Row)\n");
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    printf("\n");

    
    // Pattern 4: Centered Pyramid Star Pattern
    // Isme pehle spaces (n - i) print karne honge, fir stars.
    
    printf("4. Centered Pyramid Star Pattern\n");
    for(int i = 1; i <= n; i++) {
        // Leading spaces loop
        for(int space = 1; space <= (n - i); space++) {
            printf(" ");
        }
        // Stars loop
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    
    // Pattern 5: Floyd's Triangle (Continuous Numbers)
    // Ek counter variable lenge jo loop ke beech me reset nahi hoga.
  
    printf("5. Floyd's Triangle (Consecutive Numbers)\n");
    int current_number = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", current_number);
            current_number++; // Har number ke baad value badhao
        }
        printf("\n");
    }

    return 0;
}
