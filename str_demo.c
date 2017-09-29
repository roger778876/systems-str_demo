#include <stdio.h>
#include <string.h>

int main(){
  char s[] = "This is a string.";

  // strchr function
  // returns pointer to first occurrence of char in string
  char search1 = 'a';
  char search2 = 'f';
  char *occur1 = strchr(s, search1);
  char *occur2 = strchr(s, search2);
  printf("Address of 1st occurrence of character [%c] in string [%s]: %p\n", search1, s, occur1);
  printf("Address of 1st occurrence of character [%c] in string [%s]: %p\n", search2, s, occur2);


  // strstr function
  // returns pointer to first occurrence of substring in string
  char search3[] = "string";
  char search4[] = "word";
  char *occur3 = strstr(s, search3);
  char *occur4 = strstr(s, search4);
  printf("Address of 1st occurrence of substring [%s] in string [%s]: %p\n", search3, s, occur3);
  printf("Address of 1st occurrence of substring [%s] in string [%s]: %p\n", search4, s, occur4);
}