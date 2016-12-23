#include <unistd.h>

void    ft_putchar(char c)
{
        write(1,&c,1);
}

void    ft_print_numbers(void)
{
        char numbers;

        numbers = 49;
        while (numbers <= '9')
        {
                ft_putchar(numbers);
                numbers++;
        }
        ft_putchar('\n');
}

int main(void)
{
        ft_print_numbers();
        return(0);
}
