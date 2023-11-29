#include <iostream>
#include <cmath>
#include <iomanip>

double task(double* arr, int n)
{
	double t = 0;

	for (int i = 0; i < n; i++)
		t += arr[i] * arr[i];

	t = sqrt(t / n);

	return t;
}

int sizechecker(int n)
{
	while (true)
	{
		try
		{
			if (!(std::cin >> n))
			{
				std::cin.clear();

				while (std::cin.get() != '\n');

				throw "Size is non digit!";
			}
			else
				if (n <= 0 || n > 10)
					throw "Size is out of range!";
				else
					break;

		}

		catch (const char* exception)
		{
			std::cout << exception << '\n';

			std::cout << "Type new size: ";
		}
	}
	return n;
}


double elemchecker(double elem)
{
	while (true)
	{
		try
		{
			if (!(std::cin >> elem))
			{
				std::cin.clear();

				while (std::cin.get() != '\n');

				throw "Value in non digit!";
			}
			else
				break;

		}

		catch (const char* exception)
		{
			std::cout << exception << '\n';

			std::cout << "Type new value: ";}}
	return elem;
}

int main()
{
	int n = 0;

	double t;

	std::cout << "Type size of the array: ";

	n = sizechecker(n);

	double* arr = new double[n];

	std::cout << "Type elements of the array: ";

	for (int i = 0; i < n; i++)
		arr[i] = elemchecker(arr[i]);
	t = task(arr, n);
	std::cout << "Root mean square: " << t;
	delete[] arr;
	return 0;
}
