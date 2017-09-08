#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;
vector<int> createBdays(int);
int matchBday(vector<int>);

int main()
{
	
	srand((unsigned) time(0));
	double ctr;
	double trials = 100;
	//# of people in room
	for (int n = 5; n <= 100; n += 5)
	{
		ctr = 0;
		
		cout << "Group of " << n << endl;
		//number of trials
		for (int tri = 0; tri < trials; tri++)
		{
			vector <int> bdays = createBdays(n);
			ctr += matchBday(bdays);
			
			
		}
		cout << ctr << "/"<<trials<<" trial(s) had shared names. \n";

	}
	
	
}

//generates random bdays
vector<int> createBdays (int ppl)
{
	vector <int> Cbdays;

	for (int i = 0; i < ppl; i++)
	{
		int b = rand() % 366;
		Cbdays.push_back(b);
	}
	return Cbdays;
}

//matches bdays on same day
int matchBday(vector<int> birthdays)
{
	int match = 0;
	sort(birthdays.begin(), birthdays.end());
	for (int j = 0; j < birthdays.size() - 1 && match == 0; j++)
	{
		for (int k = j + 1; k < birthdays.size() && match == 0; k++)
		{
			if (birthdays[k] == birthdays[j])
			{
				match++;
			}
		}
	}
	return match;
	
}
