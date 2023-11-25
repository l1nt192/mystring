#include<stdio.h>
#include "mystr.h"
#include <string.h>

int main() {
	//char* str = "1";
	//printf("%d", my_strlen(str));
	//char str1[16] = "2136435";
	//char str2[100] = "25256";
	//my_strcpy(str1, str2);
	//printf("%s", str2);
	char str1[100] = "Pasha";
	const char* str2 = "Luchshiy";
	my_strcat(str1, str2);
	printf("%s", str1);

	
	return 0;

	

} 
	