#include <stdio.h>
void	ft_putstr_non_printable(char *str); 

int main(void){
  char *c = "'-1'\t";
  ft_putstr_non_printable(c);
}
