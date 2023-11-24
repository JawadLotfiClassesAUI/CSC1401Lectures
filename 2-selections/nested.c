// This program illustrates the use of nested selections to gradually narrow down user choices following a hierarchical structure
#include <stdio.h>

int main(void) {
    int school, level, field;

    printf(
        "Choose one of the following options\n"
        "1 : SSE\n"
        "2 : SBA\n"
        "3 : SHSS\n");
    scanf("%d", &school);
    if (school == 1) {
        printf(
            "Choose between:\n"
            "1: Undergrad\n"
            "2: Graduate\n");
        scanf("%d", &level);
        if (level == 1) {
            printf(
                "Choose between:\n"
                "1: CSC\n"
                "2: GE\n"
                "3: EMS\n");
            scanf("%d", &field);
            if (field == 1) {
                /* some code */
            }
        }
    } else if (school == 2) {
        // TODO: handle the SBA subchoices
    } else if (school == 3) {
        // TODO: handle the SHSS subchoices
    } else
        printf("Invalid school choice");

    return 0;
}