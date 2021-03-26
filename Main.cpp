#include <thread>
#include <iostream>
#include <chrono>

const int MAX_LOOPS = 5;

void work(int id, int interval)
{
	int i = 0;
	while (i < MAX_LOOPS)
	{
		printf("Thread [%d] is putting in work.\n", id);
		std::this_thread::sleep_for(std::chrono::milliseconds(interval));
		++i;
	}
}

int main()
{
	std::cout << "Booting up." << std::endl;

	std::thread first(work, 1, 500);
	std::thread second(work, 2, 1000);

	std::cout << "Threads 1 and 2 are now executing concurrently." << std::endl;

	first.join();
	second.join();

	std::cout << "Threads 1 and 2 have completed." << std::endl;
}
