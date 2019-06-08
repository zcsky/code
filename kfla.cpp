#include <stdio.h>
main(m,k){for(;m%k--?:(k=m++);k^1?:printf("%i|",m));}
