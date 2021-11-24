#include <stdio.h>
int compute_grade( int points ) {
    int grade;
    if ( points > 85 ) {
        grade = 1;
    }
    else if ( points > 65 ) {
        grade = 2;
    }
    else if ( points > 50 ) {
        grade = 3;
    }
    else {
        grade = 4;
    }
    return grade;
}
int main() {
    int points;
    scanf ("%d", &points);
    while (points >=0){ 
        if (points > 100) {
            printf("NA\n");
            scanf ("%d", &points);
        }
        else{
            int grade = compute_grade( points );
            printf("%d\n", grade);
            scanf ("%d", &points);
        }
    }
    return 0;    
}
