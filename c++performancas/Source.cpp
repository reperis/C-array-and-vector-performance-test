#include <iostream>
#include <time.h>
#include <ctime>
#include <conio.h>
#include <chrono>
#include <vector>
#include <cstdlib>
#include <cassert>

using namespace std;

//#define ARR_SIZE 1000000

//Rasymas i masyva
void pirmas() 
{
	const int max = 256;
	int arr[max];
	int tmp;

	auto t1 = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < max; i++)
	{
		arr[i] = rand();
	}
	//time_t end = clock();
	auto t2 = std::chrono::high_resolution_clock::now();

	std::cout << "f(rasymas i masyva)                               uztruko:     "
		<< std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() 
		<< "   nanoseconds\n";
}

//Skaitymas is masyvo
void antras() 
{
	const int max = 256;
	int arr[max];
	int tmp;

	auto t1 = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < max; i++)
	{
		tmp = arr[i];
	}
	auto t2 = std::chrono::high_resolution_clock::now();

	std::cout << "f(skaitymas is masyvo)                            uztruko:     "
		<< std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() 
		<< "    nanoseconds\n";

}

//Random skaitymas is masyvo
void trecias()
{
	const int max = 256;
	int arr[max];
	int tmp;

	auto t1 = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < max; i++)
	{
		tmp = arr[rand() % max];
	}
	auto t2 = std::chrono::high_resolution_clock::now();

	std::cout << "f(Random skaitymas is masyvo)                     uztruko:     "
		<< std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() 
		<< "   nanoseconds\n";
}


//Rasymas i masyva
void ketvirtas()
{
	const int max = 256;
	int arr[max];
	int tmp;
	int *darr = (int *)calloc(sizeof(int), max);

	auto t1 = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < max; i++)
	{
		darr[i] = rand();
	}
	auto t2 = std::chrono::high_resolution_clock::now();

	std::cout << "f(rasymas i masyva)                               uztruko:     "
		<< std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() 
		<< "   nanoseconds\n";
}

//Skaitymas is masyvo
void penktas()
{
	const int max = 256;
	int arr[max];
	int tmp;
	int *darr = (int *)calloc(sizeof(int), max);

	auto t1 = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < max; i++)
	{
		tmp = darr[i];
	}
	auto t2 = std::chrono::high_resolution_clock::now();

	std::cout << "f(Skaitymas is masyvo)                            uztruko:     "
		<< std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() 
		<< "    nanoseconds\n";
}

//Random skaitymas is din masyvo
void sestas()
{
	const int max = 256;
	int arr[max];
	int tmp;
	int *darr = (int *)calloc(sizeof(int), max);

	auto t1 = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < max; i++)
	{
		tmp = darr[rand() % max];
	}
	auto t2 = std::chrono::high_resolution_clock::now();

	std::cout << "f(Random skaitymas is din masyvo)                 uztruko:     "
		<< std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() 
		<< "   nanoseconds\n";
}

//Rasymas naudojant indeksus
void septintas()
{


	const int max = 256;
	int arr[max];
	int tmp;
	int *darr = (int *)calloc(sizeof(int), max);
	std::vector<int> v(max);
	assert(v.capacity() == max);

	auto t1 = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < max; i++)
	{
		v[i] = rand();
	}
	auto t2 = std::chrono::high_resolution_clock::now();

	std::cout << "f(Rasymas naudojant indeksus)                     uztruko:     "
		<< std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() 
		<< "  nanoseconds\n";
}

//Skaitymas naudojant indeksus
void astuntas()
{
	const int max = 256;
	int arr[max];
	int tmp;
	int *darr = (int *)calloc(sizeof(int), max);
	std::vector<int> v(max);
	assert(v.capacity() == max);

	auto t1 = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < max; i++)
	{
		tmp = v[i];
	}
	auto t2 = std::chrono::high_resolution_clock::now();

	std::cout << "f(Skaitymas naudojant indeksus)                   uztruko:     "
		<< std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() 
		<< "   nanoseconds\n";
}

//Random skaitymas is dinaminio masyvo
void devintas()
{
	const int max = 256;
	int arr[max];
	int tmp;
	int *darr = (int *)calloc(sizeof(int), max);
	std::vector<int> v(max);
	assert(v.capacity() == max);

	auto t1 = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < max; i++)
	{
		tmp = v[rand() % max];
	}
	auto t2 = std::chrono::high_resolution_clock::now();

	std::cout << "f(Random skaitymas is dinaminio masyvo)           uztruko:     "
		<< std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() 
		<< "  nanoseconds\n";
}

//Rasymas i vektoriu naudojant iteratorius
void desimtas()
{
	const int max = 256;
	int arr[max];
	int tmp;
	int *darr = (int *)calloc(sizeof(int), max);
	std::vector<int> v(max);
	assert(v.capacity() == max);
	std::vector<int>::iterator itr, itr_end;
	auto t1 = std::chrono::high_resolution_clock::now();

	for (itr = v.begin(), itr_end = v.end(); itr != itr_end; itr++)
	{
		*itr = rand();
	}
	auto t2 = std::chrono::high_resolution_clock::now();

	std::cout << "f(Rasymas i vektoriu naudojant iteratorius)       uztruko:     "
		<< std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() 
		<< "  nanoseconds\n";
}

//Skaitymas is vektoriaus naudojant iteratorius
void vienuoliktas()
{
	const int max = 256;
	int arr[max];
	int tmp;
	int *darr = (int *)calloc(sizeof(int), max);
	std::vector<int> v(max);
	assert(v.capacity() == max);
	std::vector<int>::iterator itr, itr_end;

	auto t1 = std::chrono::high_resolution_clock::now();
	for (itr = v.begin(), itr_end = v.end(); itr != itr_end; itr++)
	{
		tmp = *itr;
	}
	auto t2 = std::chrono::high_resolution_clock::now();

	std::cout << "f(Skaitymas is vektoriaus naudojant iteratorius)  uztruko:     "
		<< std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count()
		<< "  nanoseconds\n";
}


int main(void) {

	pirmas();
	antras();
	trecias();
	ketvirtas();
	penktas();
	sestas();
	septintas();
	astuntas();
	devintas();
	desimtas();
	vienuoliktas();

	getch();
}