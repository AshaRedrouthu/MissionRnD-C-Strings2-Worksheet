/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>

void count_vowels_and_consonants(char *str,int *consonants, int *vowels){
	if (str == "" || str == '\0'){
		*consonants = 0, *vowels = 0;
		return;
	}
	int i = 0;
	char ch;
	int v = 0, c = 0;

	while (str[i] != '\0')
	{
		ch = str[i];
		if (ch >= 'A'&&ch <= 'Z')
			ch = ch + 32;
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			v++;
		else
			if (ch >= 'a'&&ch <= 'z')
				c++;
		i++;
	}
	*consonants = c;
	*vowels = v;
}
