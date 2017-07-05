#include <stdio.h>

#include "liba/liba.h"
#include "libb/libb.h"

int main(int argc, char **argv) {
  fprintf(stdout, "%s", ":: welcome to [app]\n");
  fprintf(stdout, ":: number of args: %d\n", argc);
  fprintf(stdout, ":: args-pointer:   %p\n", argv);
  fprintf(stdout, "%s", ":: calling liba_hello()...\n");
  liba_hello();
  fprintf(stdout, "%s", ":: calling liba_hello()... [done]\n");

  fprintf(stdout, "%s", ":: calling libb_hello()...\n");
  libb_hello();
  fprintf(stdout, "%s", ":: calling libb_hello()... [done]\n");

  fprintf(stdout, "%s", ":: bye.\n");

  return 0;
}

/* EOF */
