# _printf - Witch you print all type data that you want
Here we have to create our own code for the function `printf`

### Authors
* Haru (Humberto) Tejada
* Jairo Castillo

### EXAMPLES
```
#include "main.h"

int main(void) 
{
	int len;
	len = _printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	_printf("Negative:[%d]\n", -762534);
	_printf("Length:[%d, %i]\n", len, len);
}
```
### For more Information
> RTFM
