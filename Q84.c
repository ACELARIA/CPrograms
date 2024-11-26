#include <stdio.h> 
struct Book { 
    char title[100]; 
    char author[100]; 
    float price; 
}; 
int main() { 
    struct Book book[10]; 
    int i, n; 
    printf("Enter the number of books: "); 
    scanf("%d", &n); 
    for(i = 0; i<n; i++) 
    { 
    printf("\nEnter details for book %d:\n", i+1); 
    printf("Enter title: "); 
    scanf("%s", book[i].title); 
    printf("Enter author: "); 
    scanf("%s", book[i].author); 
    printf("Enter price: "); 
    scanf("%f", &book[i].price); 
    } 
    for(i = 0; i<n; i++) 
    { 
    printf("\n\nDetails of book %d:\n", i+1); 
    printf("Title: %s\n", book[i].title); 
    printf("Author: %s\n", book[i].author); 
    printf("Price: $%.2f\n", book[i].price); 
    } 
    return 0; 
} 