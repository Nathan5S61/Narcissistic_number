#include "Narcissistic.h"
#include "global.h"

int main()
{
	while (true)
	{
		std::cout << "Text in number: " << "1.Daffodil_number\t" << "2.Four-leaf-rose_number\t" << "3.Five-point-star_number\n";
		std::cin >> choose;
		if (choose == "1")
		{
			DaffodilNumber();
		}
		else if (choose == "2")
		{
			RoseNumber();
		}
		else if (choose == "3")
		{
			StarNumber();
		}
		else
			break;
	}
	return 0;
}