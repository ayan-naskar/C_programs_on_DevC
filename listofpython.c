#include<stdio.h>

int main()
{
	struct list{
		union{
			int data;
		}a;
		union{
			float data;
		}b;
		union{
			char data[10];
		}a;
	};
}
