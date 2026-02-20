#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5, per;
    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    per = (m1 + m2 + m3 + m4 + m5) / 5;
    printf("Percentage = %.2f\n", per);

    if(per >= 90) printf("Grade: A+");
    else if(per >= 80) printf("Grade: A");
    else if(per >= 70) printf("Grade: B");
    else if(per >= 60) printf("Grade: C");
    else if(per >= 50) printf("Grade: D");
    else printf("Grade: Fail");

    return 0;
}

