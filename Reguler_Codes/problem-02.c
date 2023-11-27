#include <stdio.h>

int main(){

    double mark;

    printf("Enter your mark: ");
    scanf("%lf",&mark);

    printf("\n");

    if (mark >= 80)
    {
        printf("Grade: A+\nGPA: 4.00\nRemarks: OutStanding\n");
    }
    else if (mark >= 75 && mark <= 79){
        printf("Grade: A\nGPA: 3.75\nRemarks: Excelent\n");
    }
    else if (mark >= 70 && mark <= 74){
        printf("Grade: A-\nGPA: 3.50\nRemarks: Very Good\n");
    }
    else if (mark >= 65 && mark <= 69){
        printf("Grade: B+\nGPA: 3.25\nRemarks: Good\n");
    }
    else if (mark >= 60 && mark <= 64){
        printf("Grade: B\nGPA: 3.00\nRemarks: Satisfactory\n");
    }
    else if (mark >= 55 && mark <= 59){
        printf("Grade: B-\nGPA: 2.75\nRemarks: Above Average\n");
    }
    else if (mark >= 50 && mark <= 54){
        printf("Grade: C+\nGPA: 2.50\nRemarks: Average\n");
    }
    else if (mark >= 45 && mark <= 49){
        printf("Grade: C\nGPA: 2.25\nRemarks: Bellow Average\n");
    }
    else if (mark >= 40 && mark <= 44){
        printf("Grade: D\nGPA: 2.00\nRemarks: Pass\n");
    }
    else if (mark < 40){
        printf("Grade: F\nGPA: 0.00\nRemarks: Fail\n");
    }

    return 0;
}
