#include "types.h"
#include "user.h"
#include "syscall.h"

int
main(int argc, char *argv[])
{
  char *dir1 = "dir1";
  
  printf(1, "Hello, world\n");
  printf(1,"Number of last syscall: %d. (should be 16)\n",lastc());
  printf(1, "Creating directory.\n");
  mkdir(dir1);
  printf(1,"Number of last syscall: %d. (should be 20)\n",lastc());
  printf(1, "Removing directory.\n");
  unlink(dir1);
  printf(1,"Number of last syscall: %d. (should be 18)\n",lastc());
  exit();
}
