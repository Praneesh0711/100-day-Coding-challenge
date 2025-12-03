#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    int day, month, year;

    scanf("%s", date);

    sscanf(date, "%d/%d/%d", &day, &month, &year);

    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun",
                      "Jul","Aug","Sep","Oct","Nov","Dec"};

    printf("%02d-%s-%04d\n", day, months[month-1], year);

    return 0;
}
