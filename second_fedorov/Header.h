#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include <fstream>
#include <ctype.h>
#include <windows.h>
#include <vector>

using namespace std;

#define MAXLINE 20
#define num_ 3
#define sex_ 2
#define year_ 4
#define piesel_ 12


#define MENU "| q-Zamkac |  a-ADD uzytkownika  |  d-Usuwanie uzytkownika |  e-Redaktor |  s-Sortowac |  y-Szukaj |" 
#define stru "#   Name                 Surname	       Year		   Piesel 	       Sex"


#define MANIP setw(MAXLINE) <<  left 

struct Users
{
	string Name;
	string Surname;
	string Year;
	string piesel;
	string sex;
};
struct Uzond
{
	Users *people;
	string Name;
	string Numer;
	int size_Of_arr_peopls;
};
struct COLOR
{
	short text;
	short back;
};
enum ConsoleColor
{
	Black = 0, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray,
	LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White
};

enum Keys { Enter = 13, Backspace = 8 };
enum SpecialKeys { Left = 75, Right = 77, End = 79, Home = 71, Esc = 27, Del = 83 };



Uzond* create(short size);
Uzond* initRand(Uzond* program, short size, short size_of_peopl, vector<string> arr_name, vector<string> arr_suname, vector<string>arr_of_name_urzant);
void show(Uzond* program, short size, short size_of_peopl);
int rand_data(string sex);								/// от 0 до 9 муж. от 10 до 19 жен
string rand_data(int max);
Uzond* sort(Uzond* program, short size, short size_of_peopl);


COORD getCursorPosition(void);
void Clear(int x, int y, long cnt = 100);
bool stredit(char* str, int buffer_size, int x, int y, int cursor = 0, bool clear_after = true);
void showcursor(bool flag);
void setCursorPosition(int x, int y);
COORD getConsoleSize();
COLOR GetColor();
WORD GetColorWord();
void SetColor(COLOR Color);


void DeleteCh(char* str, int& cursor, int& term);
void InsertCh(char* str, int buffer_size, int& cursor, int& term, char symb);
