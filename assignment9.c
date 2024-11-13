 #include <stdio.h>
int calculate_bill(int units) {
    int bill = 0;
    if (units <= 100) {
        bill = units * 5;
    } 
    else if (units <= 200) {
        bill = 100 * 5 + (units - 100) * 8;
    } 
    else {
        bill = 100 * 5 + 100 * 8 + (units - 200) * 10;
    }
    
    return bill;
}

int main() {
    int units;
    printf("Enter units consumed (1-1000): ");
    scanf("%d", &units);
    
    if (units < 1 || units > 1000) {
        printf("Invalid units. Please enter units between 1 and 1000.");
    } else {
        printf("Total Bill: %d", calculate_bill(units));
    }
    
    return 0;
}
[10:56 AM, 11/13/2024] 𝑵𝒊𝒔𝒉𝒂𝒔𝒉𝒐𝒌✨: #include<stdio.h>
char determine_grade(int score) {
    if (score >= 90) return 'A';
    else if (score >= 80) return 'B';
    else if (score >= 70) return 'C';
    else if (score >= 60) return 'D';
    else return 'F';
}

int main() {
    int score;
    printf("Enter score (0-100): ");
    scanf("%d", &score);
    
    if (score < 0 || score > 100) {
        printf("Invalid score. Please enter a score between 0 and 100.");
    } else {
        printf("Grade: %c", determine_grade(score));
    }
    return 0;
}