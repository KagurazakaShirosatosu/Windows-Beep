#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <cstdlib>

using namespace std;

int main()
{
    /**	
    *			Frequency Chart
    *   Octave	1  2  3   4   5   6    7    8
    *   C 		16 33 65 131 262 523 1046 2093
    *   C# 		17 35 69 139 277 554 1109 2217
    *   D 		18 37 73 147 294 587 1175 2349
    *   D# 		19 39 78 155 311 622 1244 2489
    *   E 		21 41 82 165 330 659 1328 2637
    *   F 		22 44 87 175 349 698 1397 2794
    *   F# 		23 46 92 185 370 740 1480 2960
    *   G 		24 49 98 196 392 784 1568 3136
    *   G# 		26 52 104 208 415 831 1661 3322
    *   A 		27 55 110 220 440 880 1760 3520
    *   A# 		29 58 116 233 466 932 1865 3729
    *   B 		31 62 123 245 494 988 1975 3951
    **/
	cout << "JR-SH2 使用了beep()\n";
	cout << "请先将扬声器调整到合适的音量 \n\n";
	system("PAUSE");
	Beep(262, 250);
	Beep(329, 250);
	Beep(523, 250);
	Beep(587, 250);
	Beep(659, 250);
	Beep(392, 250);
	Beep(523, 250);
	Beep(329, 250);

	Beep(698, 250);
	Beep(659, 250);
	Beep(587, 250);
	Beep(523, 250);
	Beep(494, 250);
	Beep(523, 250);
	Beep(587, 250);
	Beep(494, 250);

	Beep(523, 250);
	Beep(392, 250);
	Beep(523, 250);
	Beep(587, 250);
	Beep(659, 250);
	Beep(392, 250);
	Beep(523, 250);
	Beep(392, 250);

	Beep(880, 250);
	Beep(784, 250);
	Beep(698, 250);
	Beep(659, 250);
	Beep(587, 250);
	Beep(659, 250);
	Beep(698, 250);
	Beep(587, 250);

	Sleep(300);

	Beep(659, 500);
	Sleep(50);
	Beep(784, 500);
	Sleep(50);
	Beep(1046, 750);

	cout << "done \n";
	system("PAUSE");
    return 0;
}