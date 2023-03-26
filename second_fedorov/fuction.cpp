#include "Header.h"

Uzond* create(short size)
{
	Uzond* arr = new Uzond[size];
	return arr;
}
Uzond* initRand(Uzond* program, short size, short size_of_peopl, vector<string> arr_name, vector<string> arr_suname, vector<string>arr_of_name_urzant)
{
    for (int i = 0; i < size; i++) {
        program[i].Name = arr_of_name_urzant[rand() % 4];
        program[i].Numer = rand_data(num_);
        program[i].size_Of_arr_peopls = size_of_peopl;
        program[i].people = new Users[size_of_peopl];

        for (int j = 0; j < size_of_peopl; j++) {
			program[i].people[j].sex = rand_data(sex_);
            program[i].people[j].Name = arr_name[rand_data(program[i].people[j].sex)];
            program[i].people[j].Surname = arr_suname[rand_data(program[i].people[j].sex)];
            program[i].people[j].Year = rand_data(year_);
            program[i].people[j].piesel = rand_data(piesel_);
        }
    }
	return program;
}
int rand_data(string sex)								/// от 0 до 9 муж. от 10 до 19 жен
{
	if (sex == "man")
		return rand() % 5;
	else
		return rand() % 5 + 5;

}
string rand_data(int max)
{
	string rez;
	if (max == 2)
	{
		if ((rand() % 2) == 1)
		{
			rez = "man";
		}
		else
		{
			rez = "women";
		}
		return rez;
	}
	else if (max == 4)
	{
		int year = rand() % (2023 - 1900 + 1) + 1900;
		return to_string(year);
	}
	else if (max == 12)
	{
		long number = 0;
		for (int i = 0; i < 12; i++) {
			number = number * 10 + rand() % 10;
		}

		return to_string(number);
	}
	else if (max == 3)
	{
		long long number = 0;
		for (int i = 0; i < 3; i++) {
			number = number * 10 + rand() % 10;
		}
		return to_string(number);
	}
	return nullptr;
}


void show(Uzond* program, short size, short size_of_peopl)
{

system("cls");
cout << "----------------------------------------------------------------------------------------------------\n";
cout << MENU << endl;
cout << "----------------------------------------------------------------------------------------------------\n";
cout << "				    ---=== UZOND BOOK ===---            your Uzond: " << size << endl;
cout << "----------------------------------------------------------------------------------------------------\n";
cout << stru << endl;
cout << "----------------------------------------------------------------------------------------------------\n";
for (short i = 0; i < size; i++)
{
	cout << right << setw(3) << setfill('0') << i + 1 << setfill(' ') << " ";
	cout << MANIP << program[i].Name << " " << MANIP << program[i].Numer << endl;
	cout << endl << "    ";
	for (short j = 0; j < size_of_peopl; j++)
	{
		
		cout << MANIP << program[i].people[j].Name << " " << MANIP << program[i].people[j].Surname << " " << MANIP << program[i].people[j].Year << " " << MANIP << program[i].people[j].piesel << " " << MANIP << program[i].people[j].sex << "  ";
		cout << endl<<"    ";
	}
	
	cout << endl << endl;
}
}

Uzond* sort(Uzond* program, short size, short size_of_peopl)
{
	cout << endl << "Wybiesz:\n1 - posortowac za Name\n2 - posortowac za Surname\n3 - posortowac za sex\n4 - posortowac za piesel\n5 - posortowac za Year\nQ - Wyjść\n";
	cout << endl;
	switch (_getch())
	{
	case '1':
		for (short l = 0; l < size; l++)
		{
			for (short i = 0; i < size_of_peopl; i++) {
				for (short j = i + 1; j < size_of_peopl; j++) {
					if (program[l].people[i].Name.compare(program[l].people[j].Name) > 0) {
						swap(program[l].people[i].Name, program[l].people[j].Name);
						swap(program[l].people[i].Surname, program[l].people[j].Surname);
						swap(program[l].people[i].sex, program[l].people[j].sex);
						swap(program[l].people[i].piesel, program[l].people[j].piesel);
						swap(program[l].people[i].Year, program[l].people[j].Year);
					}
				}
			}
		}
		cout << endl << "Sorted" << endl;
		system("pause");
		break;
	case '2':

		for (short l = 0; l < size; l++)
		{
			for (short i = 0; i < size_of_peopl; i++) {
				for (short j = i + 1; j < size_of_peopl; j++) {
					if (program[l].people[i].Surname.compare( program[l].people[j].Surname) > 0) {
						swap(program[l].people[i].Name, program[l].people[j].Name);
						swap(program[l].people[i].Surname, program[l].people[j].Surname);
						swap(program[l].people[i].sex, program[l].people[j].sex);
						swap(program[l].people[i].piesel, program[l].people[j].piesel);
						swap(program[l].people[i].Year, program[l].people[j].Year);
					}
				}
			}
		}
		cout << endl << "Sorted" << endl;
		system("pause");
		break;
	case '3':

		for (short l = 0; l < size; l++)
		{
			for (short i = 0; i < size_of_peopl; i++) {
				for (short j = i + 1; j < size_of_peopl; j++) {
					if (program[l].people[i].sex.compare(program[l].people[j].sex) > 0) {
						swap(program[l].people[i].Name, program[l].people[j].Name);
						swap(program[l].people[i].Surname, program[l].people[j].Surname);
						swap(program[l].people[i].sex, program[l].people[j].sex);
						swap(program[l].people[i].piesel, program[l].people[j].piesel);
						swap(program[l].people[i].Year, program[l].people[j].Year);
					}
				}
			}
		}
		cout << endl << "Sorted" << endl;
		system("pause");
		break;
	case '4':

		for (short l = 0; l < size; l++)
		{
			for (short i = 0; i < size_of_peopl; i++) {
				for (short j = i + 1; j < size_of_peopl; j++) {
					if (program[l].people[i].piesel.compare(program[l].people[j].piesel) > 0) {
						swap(program[l].people[i].Name, program[l].people[j].Name);
						swap(program[l].people[i].Surname, program[l].people[j].Surname);
						swap(program[l].people[i].sex, program[l].people[j].sex);
						swap(program[l].people[i].piesel, program[l].people[j].piesel);
						swap(program[l].people[i].Year, program[l].people[j].Year);
					}
				}
			}
		}
		cout << endl << "Sorted" << endl;
		system("pause");
		break;
	case '5':

		for (short l = 0; l < size; l++)
		{
			for (short i = 0; i < size_of_peopl; i++) {
				for (short j = i + 1; j < size_of_peopl; j++) {
					if (program[l].people[i].Year.compare(program[l].people[j].Year) > 0) {
						swap(program[l].people[i].Name, program[l].people[j].Name);
						swap(program[l].people[i].Surname, program[l].people[j].Surname);
						swap(program[l].people[i].sex, program[l].people[j].sex);
						swap(program[l].people[i].piesel, program[l].people[j].piesel);
						swap(program[l].people[i].Year, program[l].people[j].Year);
					}
				}
			}
		}
		cout << endl << "Sorted" << endl;
		system("pause");
		break;
	case 'q':
	case 'Q':
		break;
	default:
	{
		cout << endl << "Press 1, 2 or Q " << endl;
		system("pause");
	}
	}
	return program;
}

/*
Uzond* edit(Uzond* program, short size, short size_of_peop, short index_1, short index_2, bool menu)
{
	system("cls");

	if (index_1 < 0 || index_2 >= size || index_1 >= size_of_peop || index_2 < 0)
	{
		//error();
		return program;
	}
	do
	{
		system("cls");
		cout << "Urzond #" << index_1 << "*" << index_2 << endl << endl;
		cout << "Enter name: ";
		stredit(program[index_1].people[index_2].Name, MAXLINE, 12, 2);

	} while (strlen(program[index_1].people[index_2].Name) == 0);
	do
	{
		system("cls");
		cout << "Urzond #" << index_1 << "*" << index_2 << endl << endl;
		cout << "Enter numer: ";
		stredit(program[index_1].people[index_2].Surname, MAXLINE, 13, 2);

	} while (strlen(program[index_1].people[index_2].Surname) == 0);

	if (menu) cout << "Edited!" << endl;

	return program;
}
*/