#include <stdio.h>
int main() {
    int unit;
    float amt, total_amt, sur_charge;
    printf("Enter total units consumed: ");
    scanf("%d", &unit);

    if (unit <= 100) {
        amt = unit * 1.50;
    } else if (unit <= 200) {
        amt = (100 * 1.50) + ((unit - 100) * 2.50);
    } else if (unit <= 300) {
        amt = (100 * 1.50) + (100 * 2.50) + ((unit - 200) * 3.50);
    } else {
        amt = (100 * 1.50) + (100 * 2.50) + (100 * 3.50) + ((unit - 300) * 5.00);
    }
    
    total_amt = amt;

    printf("Electricity Bill = Rs. %.2f\n", total_amt);

    return 0;
}
