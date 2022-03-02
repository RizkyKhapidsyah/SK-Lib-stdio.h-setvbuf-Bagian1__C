#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
	Source by CPlusPlus
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	FILE* pFile;

	pFile = fopen("myfile.txt", "w");
	setvbuf(pFile, NULL, _IOFBF, 1024);

	// letakkan kode operasi file disni

	fclose(pFile);

	_getch();
	return 0;
}