#include <unistd.h>
/**Main - prints "and that  piece of art is useful". 
 * followed by snewline and standard output.
 * Return: always 1 if success.
 */
int main(void)

{
	write(2, "and that piece of art is useful\" -Dora kopar, 2015-10-19\n", 59);
	return (1);
}
