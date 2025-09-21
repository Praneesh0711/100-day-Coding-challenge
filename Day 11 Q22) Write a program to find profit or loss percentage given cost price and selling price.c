#include <stdio.h>
int main()
{
    float costprice, sellingprice, profit, loss;
    printf("Enter the Cost Price: ");
    scanf("%f", &costprice);
    
    printf("Enter the Selling Price: ");
    scanf("%f", &sellingprice);
    
    if (sellingprice > costprice)
      
    {
        profit = sellingprice - costprice;
        float profitPercent = (profit / costprice) * 100;
        printf("Profit %.0f%%\n", profitPercent);
    } else if (sellingprice < costprice)
      
    {
        loss = costprice - sellingprice;
        float lossPercent = (loss / costprice) * 100;
        printf("Loss %.0f%%\n", lossPercent);
    } 
      else
      
    {
        printf("No Profit No Loss\n");
    }
    
    return 0;
}
