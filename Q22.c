//Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main() {
    double cost_price, selling_price;
    double profit, loss;
    double profit_percentage, loss_percentage;

    printf("Enter the Cost Price: ");
    scanf("%lf", &cost_price);

    printf("Enter the Selling Price: ");
    scanf("%lf", &selling_price);

    if (selling_price > cost_price) {
        profit = selling_price - cost_price;
        profit_percentage = (profit / cost_price) * 100;
        printf("Profit: %.2lf\n", profit);
        printf("Profit Percentage: %.2lf%%\n", profit_percentage);
    } 
    else if (cost_price > selling_price) {
        loss = cost_price - selling_price;
        loss_percentage = (loss / cost_price) * 100;
        printf("Loss: %.2lf\n", loss);
        printf("Loss Percentage: %.2lf%%\n", loss_percentage);
    } 
    else {
        printf("No Profit No Loss.\n");
    }

    return 0; 
}