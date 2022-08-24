#include <unistd.h>
int main()
{
	write(1, "1", 1);
	write(1, "2", 1);
	write(1, "3", 1);
	write(1, "fizz", 4);
	write(1, "fizz", 4);
	write(1, "1", 1);
}
