#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headers/shell.h"
#include "headers/sgf.h"
#include "headers/functions.h"

int main(int argc, char* argv[]){
  initDisk();
  launch_shell(argc,argv);
  //createFile("abc",'d');
  //createFile("def", 'd');
  //char s[10] = "abc";
  //char d[10] = "def";
  //move(s, d);
  testContent();

  return 0;
}
