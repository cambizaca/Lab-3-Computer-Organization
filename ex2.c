#include <stdio.h>
#include <string.h>
#include <stdbool.h> 

#define MAX 1000 /* The maximum number of characters in a line of input */

int main()
{
  char textInput[MAX], textInReverse[MAX], c;
  int length;

  puts("Type some text (then ENTER):");

  /* Save typed characters in text[]: */

    fgets(textInput,MAX,stdin);

  length = strlen(textInput) - 1;

  /* Analyse contents of text[]: */

  for (int i = 0; i < length; i++)
  {
    textInReverse[length - i - 1] = textInput[i];
      if (c == '\n'){
        break;
    }
  }

  _Bool isPal = true;
  for(int i = 0; i < length - 1; i++) {
    if(textInput[i] != textInReverse[i]) {
      isPal = false;
      break;
    }
  }
  textInReverse[length] = '\0';

  printf("Your input in reverse is:\n");
  printf("%s\n", textInReverse);
  if(isPal){
    printf("Found a palindrome!\n");
  }
}
