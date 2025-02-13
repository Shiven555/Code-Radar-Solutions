#include <stdio.h>
int num ,n;
scanf("%d %d",&num,&n);
num = num | (1 << n);
printf("%d \n",num);
return 0;
