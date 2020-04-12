#include <ctype.h>
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
  int newlen;
  char textPureR[newlen], textPure[newlen];

  /* Analyse contents of text[]: */

  for (int i = 0; i < length; i++) {
    int indy = length - i -1;
    char temp = textInput[i];
    textInReverse[indy] = temp;
    if(!isspace(textInReverse[indy]) && !ispunct(textInReverse[indy])) {
      if(isalpha(textInReverse[indy])) {
        textPureR[newlen] = tolower(textInReverse[indy]);
        newlen++;
      } else {
          textPureR[newlen] = textInReverse[indy];
          newlen++;
      }
     }

    if(!isspace(temp) && !ispunct(temp)) {
        if(isalpha(temp)) {
	  textPure[newlen] = tolower(temp);
	} else {
	  textPure[newlen] = temp;
	}
    }

    if (c == '\n'){
        break;
    }

  }

  for(int i = 0; i < newlen; i++) {
    char hi = textPure[newlen - i - 1];
    textPureR[i] = hi;
  }

  _Bool isPal = true;
  for(int i = 0; i < newlen - 1; i++) {
  if(textPureR[i] != textPure[i]) {
      isPal = false;
      break;
    }
  }
  textInReverse[length] = '\0';
  textPure[newlen] = '\0';
  textPureR[newlen] = '\0';

  printf("pureR: %s\n", textPureR);
  printf("pure: %s\n", textPure);
  printf("Your input in reverse is:\n");
  printf("%s\n", textInReverse);
  if(isPal){
    printf("Found a palindrome!\n");
  }
}

