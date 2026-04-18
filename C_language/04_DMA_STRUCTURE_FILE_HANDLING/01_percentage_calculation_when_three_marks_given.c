#include <stdio.h>

struct student {
    char name[20];
    int roll;
    char sec;
    int mark1;
    int mark2;
    int mark3;
    float percent;
};

int main() {
    struct student s[20];
    int n;

    printf("Total number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter name, roll: ");
        scanf("%s %d", s[i].name, &s[i].roll);
        printf("Enter sec: ");
        scanf(" %c", &s[i].sec);
        printf("Enter mark1, mark2, mark3: ");
        scanf("%d %d %d", &s[i].mark1, &s[i].mark2, &s[i].mark3);
    }

    for (int i = 0; i < n; i++) {
        s[i].percent = (s[i].mark1 + s[i].mark2 + s[i].mark3) / 3.0;  // ✅ fixed
    }

    for (int i = 0; i < n; i++) {
        printf("\nName       = %s", s[i].name);
        printf("\nRoll       = %d", s[i].roll);
        printf("\nSection    = %c", s[i].sec);
        printf("\nMark1      = %d", s[i].mark1);
        printf("\nMark2      = %d", s[i].mark2);
        printf("\nMark3      = %d", s[i].mark3);
        printf("\nPercentage = %.2f\n", s[i].percent);
    }

    return 0;
}