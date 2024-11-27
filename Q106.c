#include <stdio.h>

struct Item {
    char item_name[50];
    int quantity;
    float price;
    float amount;
};

void calculateAmount(struct Item *item) {
    item->amount = item->quantity * item->price;
    printf("Item Name: %s\n", item->item_name);
    printf("Quantity: %d\n", item->quantity);
    printf("Price: %.2f\n", item->price);
    printf("Amount: %.2f\n", item->amount);
}

int main() {
    struct Item item;

    printf("Enter item name: ");
    scanf("%s", item.item_name);

    printf("Enter quantity: ");
    scanf("%d", &item.quantity);

    printf("Enter price: ");
    scanf("%f", &item.price);

    calculateAmount(&item);

    return 0;
}