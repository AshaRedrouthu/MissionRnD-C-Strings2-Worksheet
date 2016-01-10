/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
int strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}
char * reverseString(char *st)
{
	int i = strlen(st) - 1, j = 0;
	char ch;
	while (j<i){
		ch = *(st + j);
		*(st + j) = *(st + i);
		*(st + i) = ch;
		j++;
		i--;
	}

	return st;



}
char * get_last_word(char * str){
	char *newStr;
	newStr = (char *)malloc(sizeof(char));
	int len = strlen(str);
	int i = len - 1, k = 0;
	while (str[i] != ' '&&i >= 0)
	{
		newStr[k] = str[i];
		newStr = (char *)realloc(newStr, sizeof(char)*strlen(newStr));
		i--, k++;
	}
	newStr[k] = '\0';
	newStr = reverseString(newStr);
	return newStr;
}
