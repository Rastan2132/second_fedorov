#include "Header.h"

int main()
{
	bool work = 1;
	short size = 0;
	short urz_num, p_num;
	size = rand() % 10 + 1;
	short size_of_peopl = rand() % 10 + 1;
	Uzond* program = nullptr;
	program = create(size);
	vector<string> NAMES = { "Alexander","Maxim","Dmitry","Sergei","Ivan","Anna","Maria","Olga","Elena","Natalia" };
	vector<string> SURNAMES = { "Ivanov","Petrov","Sidorov","Smirnov","Kuznetsov","Ivanova","Petrova","Sidorova","Smirnova","Kuznetsova" };
	vector<string>NAMES_of_Uzond = { "Urzad Pracy","Urzad Spraw","Urzad Skarbowy","Urzad s. cywilnego" };

	program = initRand(program, size, size_of_peopl, NAMES, SURNAMES, NAMES_of_Uzond);
	do
	{
		 show( program,  size,  size_of_peopl);

		switch (_getch())
		{
		case (113):
			work = false;
			break;
		case (97):
			cout << "Chcesz dodać sam czy losowo (S lub R)" << endl;
			switch (_getch())
			{
			case (115):
	//			peoples = add(peoples, &size);
				break;
			case (114):
	//			peoples = resize(peoples, &size, size + 1);
	//			peoples = initRand(peoples, NAMES, SURNAMES, size - 1);
				break;
			}
			break;
		case (100):
	//		peoples = del(peoples, &size);
			break;
		case (101):

			do {

				cout << "wprowadź numer urzendu i numer osoby" << endl;
				cin >> urz_num >> p_num;
				if (urz_num > 0 && p_num > 0 && urz_num <= size && p_num <= size_of_peopl)
					break;
				error();
			
			} while (true);
			program = edit(program, urz_num-1, p_num-1);
			break;
		case (115):
			sort(program,  size, size_of_peopl);
			break;
		case (121):
			find(program, size, size_of_peopl);
			break;
		}
	} while (work);
}
