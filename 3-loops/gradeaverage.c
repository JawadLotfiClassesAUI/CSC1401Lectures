// This program illustrates the use of nested loops (inner loop is a single section average, outer loop repeats accross all sections)
#include <stdio.h>

int main(void) {
    float sumofaverages = 0.0;
    int numberofsections;
    
    printf("How many sections are there?");
    scanf("%d", &numberofsections);
    
    // Beginning of outer loop which handles sections' averages
    for (int section = 1; section < numberofsections; section++) {
        float sumofgrades = 0.0, grade, sectionaverage;
        int numberofstudents;
        
        printf("How many students do you have? ");
        scanf("%d", &numberofstudents);
        
        // Beginning of inner loop which handles students' grades
        for (int student = 1; student <= numberofstudents; student++) {
            printf("Enter a grade: ");
            scanf("%f", &grade);
            sumofgrades += grade;
        }
        // End of inner loop
        sectionaverage = sumofgrades / numberofstudents;
        printf("The average is %.2f", sectionaverage);
        sumofaverages += sectionaverage;        
    }
    
    return 0;
}