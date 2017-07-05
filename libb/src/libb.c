#include <stdio.h>

#include "liba/liba.h"
#include "libb/libb.h"

void libb_hello() {
  fprintf(stdout, "%s\n", "about to say hello from liba...");
  liba_hello();
  fprintf(stdout, "%s\n", "about to say hello from liba... [done]");

  fprintf(stdout, "%s\n", "hello from libb");
}

void libb_goodbye() {
  fprintf(stdout, "%s\n", "goodbye from libb");
}

void libb_how_are_you() {
  fprintf(stdout, "%s\n", "how are you from libb");
void libb_happy() {
  fprintf(stdout, "%s\n", "happy from libb");
}
/* EOF */
