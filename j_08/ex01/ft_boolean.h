#ifndef __FT_BOOLEAN_H__

#define __FT_BOOLEAN_H__

#include <unistd.h>
#define SUCCESS	0

#define FALSE	0
#define TRUE	1

#define EVEN_MSG "j'ai un nombre pair d'arguments.\n"
#define ODD_MSG "j'ai un nombre impair d'arguments.\n"

typedef  int t_bool;

# define EVEN(var) (var % 2)

#endif
