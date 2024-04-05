#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  int i;

   for(i = 1; i < argc; i++){
    int len=strlen(argv[i]);
    for(int j=len-1;j>=0;j--){
      write(1, argv[i]+j, 1);
    }
    if(i + 1 < argc){
      write(1, " ", 1);
    } else {
      write(1, "\n", 1);
    }
  }
  exit(0);
}
