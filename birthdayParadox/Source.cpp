#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	vector<int> bdays;
	
	srand(time(0));
	int x;
	//# of people in room
	for (int n = 5; n <= 10; n += 5)
	{
		
		cout << "Group of " << n << endl;
		//number of trials
		for (int i = 0; i < 10; i++)
		{
			cout << "Trial " << i + 1 << ": "
				<< x << " people shared birthdays";
			//number of birthdays that match
			for (int i = 0; i < n; i++)
			{
				int b = rand() % 367;
				bdays.push_back(b);
				cout << bdays[i] << endl;
			}
		}
		

	}
	
	
}