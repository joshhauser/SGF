#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headers/shell.h"
#include "headers/sgf.h"
#include "headers/functions.h"

int main() {
  initDisk();
  createFile("militaire", 'd'); 
  //createFile("cactus", 'd'); 
  //createFile("tricycle", 'd');
  //testContent();
  //removeFolder("militaire");
  //myls();
  //diskFree();  
  return 0;
}
