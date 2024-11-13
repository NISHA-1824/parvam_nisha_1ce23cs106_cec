#include <stdio.h>

void check_eligibility(int age, int monthly_income) {
    if (age < 18) {
        printf("Not Eligible");
    } else if (age <= 25 && monthly_income < 5000) {
        printf("Not Eligible");
    } else if (age <= 40 && monthly_income < 10000) {
        printf("Not Eligible");
    } else if (age > 40 && monthly_income < 15000) {
        printf("Not Eligible");
    } else {
        printf("Eligible");
    }
}

int main() {
    int age, monthly_income;
    printf("Enter age (18-60): ");
    scanf("%d", &age);
    printf("Enter monthly income (0-50000): ");
    scanf("%d", &monthly_income);
    
    check_eligibility(age, monthly_income);
    
    return 0;
}