#include<unistd.h>

char ft_write(char c)
{
  write(1, &c, 1);
}

int main(int argc, char const *argv[]) {

  char c ='Z';

  ft_write(c);
  ft_write('\n');
  return 0;
}
