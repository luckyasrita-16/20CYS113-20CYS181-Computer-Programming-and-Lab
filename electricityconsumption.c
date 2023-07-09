#include <stdio.h>

float calculate_electricity_bill(int units) {
    int free_units = 100;
    float rate_1 = 2.25;
    float rate_2 = 4.50;
    float rate_3 = 6.00;
    float rate_4 = 8.00;
    float bill = 0.0;

    if (units <= free_units) {
        return bill;
    }
    else {
        units -= free_units;
        if (units <= 300) {
            bill += units * rate_1;
        }
        else {
            bill += 300 * rate_1;
            units -= 300;
            if (units <= 100) {
                bill += units * rate_2;
            }
            else {
                bill += 100 * rate_2;
                units -= 100;
                if (units <= 100) {
                    bill += units * rate_3;
                }
                else {
                    bill += 100 * rate_3;
                    units -= 100;
                    bill += units * rate_4;
                }
            }
        }
    }

    return bill;
}

int main() {
    char name[100];
    int eb_number;
    int units;

    for (int i = 0; i < 5; i++) {
        printf("Enter the name of the consumer: ");
        scanf("%s", name);

        printf("Enter the EB number: ");
        scanf("%d", &eb_number);

        printf("Enter the units consumed: ");
        scanf("%d", &units);

        float bill = calculate_electricity_bill(units);

        printf("Electricity bill for %s (EB number: %d): %.2f INR\n", name, eb_number, bill);
        printf("----------------------------------------------\n");
    }

    return 0;
}

