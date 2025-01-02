#include <stdio.h>
int main() {
char input[100];
printf("Enter a string: ");
scanf("%s", input);
printf("Numeric digits in the string: ");
for (int i = 0; input[i] != '\0'; i++) {
if (input[i] >= '0' && input[i] <= '9') {
printf("%c ", input[i]); } }
printf("\n");
return 0;}
