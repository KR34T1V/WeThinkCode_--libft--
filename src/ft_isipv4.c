#include "../inc/private_libft_includes.h"
/*
  Checks if "const char addr" is a valid ipv4 string.
  Returns boolean results.
*/

int ft_isipv4(const char * addr) {
    struct sockaddr_in sa;
    int result = inet_pton(AF_INET, addr, &(sa.sin_addr));
    return result >= 0;
};