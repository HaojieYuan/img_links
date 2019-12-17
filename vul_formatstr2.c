#include <stdio.h>

void formatstr_vul()
{
  char user_input[1024];
  unsigned long int_input;
  int A=0x3435,B=0x5657,C=0x7879;
  
  printf("&A=0x%llx\t&B=0x%llx\tC=0x%llx.\n",&A,&B,&C);
  printf("A=0x%x\tB=0x%x\tC=0x%x.\n",A,B,C);
  puts("Please enter a interget:");
  //scanf("%u",&int_input);
  
  puts("Please enter a string:");
  scanf("%s", user_input);
  printf(user_input);puts("");
  
  printf("New values\tA=0x%x\tB=0x%x\tC=0x%x.\n",A,B,C); 
}

void main(int argc, char*argv[])
{
  formatstr_vul();
}
