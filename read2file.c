#include <stdio.h>
#include <string.h>
#include <fcntl.h>

void read2file()
{
  char buf[2014];
  int fp,size;
  unsigned long u_addr,*address;
  puts("Please enter an address.");
  scanf("%lu", &u_addr);
  address=(unsigned long*)buf;
  *address=u_addr;
  
  puts("Please enter the format string:");
  scanf("%s", buf+8);
  size=strlen(buf+8)+8;
  printf("The string length is %d\n", size);

  fp=open("mystring",O_RDWR|O_CREAT|O_TRUNC,S_IRUSR|S_IWUSR);
  if(fp!=-1)
  {
    write(fp,buf,size);
    close(fp);
  }else
  {
    printf("Open failed!\n");
  }
}

void main(int argc, char* argv[])
{
  read2file();
}
