#include <iostream>
using namespace std;

void one_dim_array_with_dinamic_memory_allocation() 
{
	int size;
	cout << "Please type int the size of the array!: ";
	cin >> size;
	int* p1 = new int[size];
	int i = 0;
	while (i<size)
	{
		p1[i] = rand()%10;
		cout << p1[i] << endl;
		i++;
	}
	delete[] p1;
}



void two_dim_array_with_half_dinamic_memory_allocation() 
{
	const int line_size = 4;//static
	int line_count;//dinamic
	cout << "Please type in the line count: ";
	cin >> line_count;

	int(*p1)[line_size] = new int[line_count][line_size];

	for (int i = 0; i < line_count; i++)
	{
		for (int j = 0; j < line_size; j++)
		{
			p1[i][j] = 0;
			cout << p1[i][j];
		}
		cout << endl;
	}

	delete[] p1;
}

void two_dim_array_with_full_dinamic_memory_allocation() 
{
	int line_size;//dinamic
	int line_count;//dinamic
	cout << "Please type in the line size: ";
	cin >> line_size;
	cout << "Please type in the line count: ";
	cin >> line_count;
	//allocation of memory using pointer vector
	int** pps = new int*[line_count];
	// allocation of lines
	for (int i = 0; i<line_count; i++)
	{
		pps[i] = new int[line_size];
	}
	for (int i = 0; i < line_count; i++)
	{
		for (int j = 0; j < line_size; j++)
		{
			pps[i][j] = 0;
			cout << pps[i][j];
		}
		cout << endl;
	}
	// free up memory
	for (int i = 0; i < line_count; i++)
	{
		delete pps[i];
	}
	delete pps;
}





int main() 
{

	one_dim_array_with_dinamic_memory_allocation();
	two_dim_array_with_half_dinamic_memory_allocation();
	two_dim_array_with_full_dinamic_memory_allocation();
	
	system("pause");
	return 0;
}
