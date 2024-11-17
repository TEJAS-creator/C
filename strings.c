// STRINGS

// #include <stdio.h>
// void main()
// {
//     char str[100] = "Hello World";
//     printf("%s", str);
// }

// USE OF POINTERS IN STRINGS
// #include <stdio.h>
// int main()
// {
//     char *str = "Hello, World!"; // using pointer instead of an array
//     printf("%s\n", str);
//     return 0;
// }

// USING GETS
// #include <stdio.h>
// void main()
// {
//     char str[100];
//     printf("Enter a string: ");
//     gets(str); // used instead of scanf since it also takes spaces into consideration
//     printf("You entered: %s", str);
// }

// COPIES FROM ONE STRING TO OTHER
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str1[100], str2[100];
//     printf("Enter first string: ");
//     gets(str1);
//     strcpy(str2, str1); // string to have copied text, entered string
//     printf("Copied second string is: %s", str2);
//     return 0;
// }

// CONCATENATE THE STRINGS
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str1[50] = "Hello, ", str2[] = "World!";
//     strcat(str1, str2); // add str2 to str1
//     printf("Concatenated String: %s\n", str1);
//     return 0;
// }

// CHECKS THE LENGTH OF THE STRING
// #include <stdio.h>
// #include <string.h>
// void main()
// {
//     char str[100];
//     printf("Enter a string: ");
//     gets(str);
//     printf("Length of the string is: %d", strlen(str));
// }

// CHECKS WEATHER THE STRINGS ARE EQUAL OR NOT
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str1[1000], str2[1000];
//     printf("Enter first string: ");
//     gets(str1);
//     printf("Enter second string: ");
//     gets(str2);
//     if (strcmp(str1, str2) == 0)
//         printf("Strings are equal");
//     else
//         printf("Strings are not equal");
//     return 0;
// }

// COUNTS THE INDEXES IN THE STRING
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[100000];
//     printf("Enter a string: ");
//     gets(str);
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         printf("Character at index %d: %c\n", i, str[i]);
//     }
//     printf("Length of the string is: %d", strlen(str));
//     return 0;
// }

// REVERSE THE STRING
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[1000000];
//     printf("Enter a string: ");
//     gets(str);
//     int len = strlen(str);

//     // Reverse the string
//     for (int i = 0; i < len / 2; i++)
//     {
//         char temp = str[i];
//         str[i] = str[len - i - 1];
//         str[len - i - 1] = temp;
//     }
//     printf("Reversed String: %s\n", str);
//     return 0;
// }

// fgets helps to read the string including spaces

// COUNTING NUMBER OF WORDS
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[100];
//     int count = 1;
//     printf("Enter a sentence: ");
//     fgets(str, sizeof(str), stdin);
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] == ' ') // excludes counting spaces
//             count++;
//     }
//     printf("Total words: %d\n", count);
//     return 0;
// }
