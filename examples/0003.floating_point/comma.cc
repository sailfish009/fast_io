#include"../../include/fast_io.h"

int main()
{
	double d;
	scan(fast_io::comma(d));
	println(fast_io::comma(d));
	println(fast_io::comma_fixed(d));
	println(fast_io::comma_scientific(d));
}