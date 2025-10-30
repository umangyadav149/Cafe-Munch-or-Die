#include <stdio.h>

int main() {
    char name[100];
    int age;
    int noi;
    int item1;
    int item2;
    int item3;
    int total = 0;
    int ni = 0;
    int po;
    char uid[50];
    char cn[16];
    char ce[5];
    char ccv[3];
    char cpin[6];
    char otp[6];
    int wo;
    int w_no[10];
    int w_pin[6];

    printf("🍕💀 Welcome to Cafe Munch or Die! 💀🍕\n");
    printf("Enter your full name\n");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age\n");
    scanf("%d", &age);

    printf("Please enter only up to 3 items.\n");
    printf("Enter the number of items you want to buy:\n");
    scanf("%d", &noi);

    if (noi == 3) {
        printf("Choose your items from below list:\n");
        printf("1 - Sandwich (Rs 50) | 2 - Coffee (Rs 30) | 3 - Juice (Rs 40)\n");
        printf("Enter option for item1: ");
        scanf("%d", &item1);
        printf("Enter option for item2: ");
        scanf("%d", &item2);
        printf("Enter option for item3: ");
        scanf("%d", &item3);
    } else if (noi == 2) {
        printf("Choose your items from below list:\n");
        printf("1 - Sandwich (Rs 50) | 2 - Coffee (Rs 30) | 3 - Juice (Rs 40)\n");
        printf("Enter option for item1: ");
        scanf("%d", &item1);
        printf("Enter option for item2: ");
        scanf("%d", &item2);
    } else if (noi == 1) {
        printf("Choose your item from below list:\n");
        printf("1 - Sandwich (Rs 50) | 2 - Coffee (Rs 30) | 3 - Juice (Rs 40)\n");
        printf("Enter option for item1: ");
        scanf("%d", &item1);
    } else {
        printf("Invalid input.\n");
        return 0;
    }

    // Calculate total
    if (item1 == 1) total += 50, ni += 1;
    else if (item1 == 2 && age >= 18) total += 30, ni += 1;
    else if (item1 == 2 && age < 18) printf("You cannot buy coffee because you are under 18.\n");
    else if (item1 == 3) total += 40, ni += 1;

    if (noi >= 2) {
        if (item2 == 1) total += 50, ni += 1;
        else if (item2 == 2 && age >= 18) total += 30, ni += 1;
        else if (item2 == 2 && age < 18) printf("You cannot buy coffee because you are under 18.\n");
        else if (item2 == 3) total += 40, ni += 1;
    }

    if (noi == 3) {
        if (item3 == 1) total += 50, ni += 1;
        else if (item3 == 2 && age >= 18) total += 30, ni += 1;
        else if (item3 == 2 && age < 18) printf("You cannot buy coffee because you are under 18.\n");
        else if (item3 == 3) total += 40, ni += 1;
    }

    printf("--------------------------------------\n");
    printf("ORDER SUMMARY\n");
    printf("--------------------------------------\n");
    printf("Hello %s", name);
    printf("Total items bought: %d\n", ni);
    printf("Total bill: Rs %d\n", total);

    printf("Please select your preferred payment mode:\n");
    printf("1 - UPI | 2 - Card | 3 - Wallet | 4 - Cash\n");
    scanf("%d", &po);

    if (po == 1) {
        printf("Enter your UPI ID:\n");
        scanf("%s", uid);
        printf("Sending payment request to your UPI app...\n");
        printf("Payment Successful!\n");
        printf("Congratulations, %sYour order has been confirmed.\n", name);
        printf("Thank you for choosing Cafe Munch or Die! We can't wait to serve you again.\n");
    } else if (po == 2) {
        printf("Enter your Card Number:\n");
        scanf("%s", cn);
        printf("Enter Card Expiry (MMYY):\n");
        scanf("%s", ce);
        printf("Enter CVV:\n");
        scanf("%s", ccv);
        printf("Enter Card PIN:\n");
        scanf("%s", cpin);
        printf("Enter OTP sent to your registered number:\n");
        scanf("%s", otp);
        printf("Payment Successful!\n");
        printf("Congratulations, %sYour order has been confirmed.\n", name);
        printf("Thank you for choosing us! We can't wait to serve you again.\n");
        printf("Have a wonderful day!\n");
    } else if (po == 3)  {
        printf("Choose your preferred wallet for payment from the list given below:\n");
        printf("1 - Paytm | 2 - PhonePe | 3 - Amazon Pay | 4 - Mobikwik | 5 - Freecharge\n");
        scanf("%d", &wo);
        printf("Enter your wallet Number for payment \n");
        scanf("%d", &w_no);
        printf("Enter your wallet PIN to confirm payment \n");
        scanf("%d", &w_pin);
        printf("🎉 Payment Successful! 🎉\n");
        printf("Your wallet is now a little lighter, but your heart is full ❤️\n");
        printf("Congratulations, %sYour order has been confirmed.\n", name);
        printf("Thank you for choosing us! We can't wait to serve you again.\n");
        printf("Have a wonderful day!\n");
    } else if (po == 4) {
        printf("Please Collect your token and Pay your Bill amount to Billing counter \n");
        printf("😎 Thanks for vibing with us — may your day be extra crispy!\n");
        printf("🔥 Come back soon — the machine misses you already!\n");
    }

    return 0;
}
