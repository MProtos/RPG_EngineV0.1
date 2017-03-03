#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <locale.h>
using namespace std;
void charcreate(int &str, int &agi, int &iq, int &gold, char *s)
{
	int k,n;
	cout << "Введите имя персонажа: ";
	gets_s(s,100);
	n = strlen(s);
	for(int i = 0; i<n;i++)
	{
		if ((s[i] < 0) || (s[i] > 128)) { cout << "Неккоректное имя персонажа !" << endl; charcreate(str, agi, iq, gold, s); }
		else break;
	}
	return;
}
int main()
{
	setlocale(LC_ALL,"");
	char s[100];
	int str, agi, iq, hp, maxhp, exp, maxexp, lvl, gold;
	str = 3;
	agi = 3;
	iq = 3;
	gold = 0;
	charcreate(str,agi,iq,gold,s);
	cout << s << endl;
	return 0;
}