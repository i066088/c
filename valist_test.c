#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int print(int num_count,...)
/*num_count contains the number of integers passed*/
{
  int i;
  va_list al;
  va_start(al,num_count);
  for(i=1;i<=num_count;i++){
     int val=va_arg(al,int);
     printf("%d ",val);
  }

}

int print_str(const char *str,...)
/*str has the number of strings passed*/
{
  int i;
  va_list al;
  int num_count=atoi(str);
  va_start(al,str);
  int *num=&num_count;
  for(i=1;i<=num_count;i++){
     char *str=va_arg(al,char *);
     printf("%s ",str);
  }

}

int main()
{
   print(3,2,3,4);
   print_str("3","Hi","All","!!!");
}
