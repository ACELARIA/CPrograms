// A. COPY ONE STRING INTO ANOTHER

#include <stdio.h>
int main()
{
    char s1[100], s2[100],i;          
    printf("Enter string s1:\n");     
    fgets(s1, 100, stdin);            
    for(i = 0; s1[i] != '\0'; ++i)    
    {
        s2[i] = s1[i];
    }
    s2[i] = '\0';                   
    printf("String s2: %s", s2);
    return 0;
}
// B. COMPARE TWO STRINGS

#include <stdio.h>
#include <strings.h>

int strcmp(char *str1, char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return *str1 - *str2;
        }
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("The first string is lexicographically smaller.\n");
    } else {
        printf("The second string is lexicographically smaller.\n");
    }

    return 0;
}

 // C. CONCAT TWO STRINGS
#include <stdio.h>
int main() {
  
char s1[100], s2[100];

    printf("Enter the first string: ");
    scanf("%s", s1);

    printf("Enter the second string: ");
    scanf("%s", s2);

  int length, j;

  length = 0;
  while (s1[length] != '\0') {
    ++length;
  }

  for (j = 0; s2[j] != '\0'; ++j, ++length) {
    s1[length] = s2[j];
  }

  s1[length] = '\0';

  printf("After concatenation: ");
  puts(s1);

  return 0;
}

// D. REVERSE A GIVEN STRING

#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int len = strlen(str);
    int start = 0;
    int end = len - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    reverseString(str);
    printf("Reversed string: %s\n", str);

}