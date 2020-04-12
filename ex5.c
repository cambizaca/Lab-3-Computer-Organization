#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX_BUF 1024

int main () {

  char buff[MAX_BUF];
  int length;
  // other stuff
  int i = 0, f = 5, t = 3, z = 0;
  char five = (char) f;
  char zero = (char) z;
  char three = (char) t;
  char a;

 // fgets(buff,MAX_BUF,stdin);
 // length = strlen(buff)-1;
 // printf("%i\n",length);
  do {

  fgets(buff,MAX_BUF,stdin);
  length = strlen(buff) - 1;
  a = buff[i];
  printf("%c",a);
        // read a line
        // calculate its length
        // modify the line by switching characters
        // print the modified line
	// if(buff[0] == "\n") {
     	// return 0;

  if(a == 'E' || a  == 'e') {
    a = three;
    printf("%c",a);
  } else if((a = getchar()) == 'O' ||(a = getchar()) == 'o') {
    a = zero;
    printf("%c",a);
  } else if((a = getchar()) == 'S' || (a = getchar()) == 's') {
    a = three;
    printf("%c",a);
  } else if(a == '\n') {
    break;
  } else {
    printf("%c",buff[i]);
  }
  i++;
  } while (length > 1);


// printf("\n");
}
