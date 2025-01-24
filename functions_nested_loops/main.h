#ifndef MAIN_H
#define MAIN_H

void my_function(char c);
void print_alphabet(void){
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
};
#endif
