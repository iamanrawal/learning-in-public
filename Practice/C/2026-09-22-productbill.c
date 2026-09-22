#include <stdio.h>

int main()
{
    float p, q, d, g, total, discount, after, gst, final;

    printf("Enter product price: ");
    scanf("%f", &p);

    printf("Enter quantity: ");
    scanf("%f", &q);

    printf("Enter discount percentage: ");
    scanf("%f", &d);

    printf("Enter GST percentage: ");
    scanf("%f", &g);

    total = p * q;
    discount = total * d / 100;
    after = total - discount;
    gst = after * g / 100;
    final = after + gst;

    printf("Total amount before discount: %.2f\n", total);
    printf("Discount amount: %.2f\n", discount);
    printf("Amount after discount: %.2f\n", after);
    printf("GST amount: %.2f\n", gst);
    printf("Final payable amount: %.2f\n", final);

    return 0;
}

// Question:
// A shop takes product price, quantity, discount percentage, and GST percentage.
// Calculate total price, discount amount, amount after discount, GST amount,
// and final payable amount.