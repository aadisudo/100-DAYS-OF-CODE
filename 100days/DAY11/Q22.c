//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitOrLoss, percentage;
    //float as prices vary in points (decimals)
    printf("Enter Cost Price: ");
    scanf("%f", &costPrice); //Input CP

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);//Input SP

    if (sellingPrice > costPrice) { //PROFIT CHECK
        profitOrLoss = sellingPrice - costPrice;
        percentage = (profitOrLoss / costPrice) * 100;
        printf("Profit = %.2f\n", profitOrLoss);
        printf("Profit Percentage = %.2f%%\n", percentage);
    } 
    else if (costPrice > sellingPrice) {//LOSS CHECK
        profitOrLoss = costPrice - sellingPrice;
        percentage = (profitOrLoss / costPrice) * 100;
        printf("Loss = %.2f\n", profitOrLoss);
        printf("Loss Percentage = %.2f%%\n", percentage);
    } 
    else { //SP=CP
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
/*
Enter Cost Price: 500
Enter Selling Price: 620
Profit = 120.00
Profit Percentage = 24.00%

Enter Cost Price: 450
Enter Selling Price: 400
Loss = 50.00
Loss Percentage = 11.11%
*/