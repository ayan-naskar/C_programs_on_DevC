#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
//#include<iostream>
#include<conio.h>

int main(){
	while(1){
		if(GetAsyncKeyState(VK_CONTROL)){
			printf("Key pressed!\n");
			//puts("Key Pressed!");
			Sleep(10);
		}
	}
}
