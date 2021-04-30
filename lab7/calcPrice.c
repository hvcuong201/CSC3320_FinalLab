#include <stdio.h>

int main() {
    int itemNum;
    int qty;
    double unitPrice;
    char purchaseDate[10];   
    printf("Enter item number:");
    scanf("%d", &itemNum);
    printf("Enter unit price:");
    scanf("%lf", &unitPrice);
    printf("Enter quantity:");
    scanf("%d", &qty);
    printf("Enter purchase date (mm/dd/yyyy):");
    scanf("%s", &purchaseDate);
    double totalAmt = qty * unitPrice;
    printf("Item\tUnit Price\tQTY\tPurchase Date\tTotal Amount\n");
    printf("%d\t$%9.2lf\t%d\t%s\t$%9.2lf\n",itemNum, unitPrice, qty, purchaseDate, totalAmt);
    return 0;
}
