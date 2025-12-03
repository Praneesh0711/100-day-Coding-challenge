#include <stdio.h>

enum Months { JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    enum Months month;

    // Example: set month to FEB
    month = FEB;

    switch(month) {
        case JAN: printf("31 days\n"); break;
        case FEB: printf("28 or 29 days\n"); break;
        case MAR: printf("31 days\n"); break;
        case APR: printf("30 days\n"); break;
        case MAY: printf("31 days\n"); break;
        case JUN: printf("30 days\n"); break;
        case JUL: printf("31 days\n"); break;
        case AUG: printf("31 days\n"); break;
        case SEP: printf("30 days\n"); break;
        case OCT: printf("31 days\n"); break;
        case NOV: printf("30 days\n"); break;
        case DEC: printf("31 days\n"); break;
        default: printf("Invalid month\n");
    }

    return 0;
}
