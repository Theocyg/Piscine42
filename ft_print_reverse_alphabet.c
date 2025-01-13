#include <unistd.h>

void ft_print_reverse_alphabet(void){
    char alphabet = 122;
    while(alphabet >=97){
        write(1, &alphabet, 1);
        alphabet --;
    }

}


int main (void){
    ft_print_reverse_alphabet();
    return 0;
}