/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
int strlen1(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}


int countFre(char *str, char *word, int i)
{
	int a = i;
	int j = 0;
	while (str[a] != word[j] && str[a] != '\0'){
		if (str[a] != word[j])
			return 0;
		a++;
		j++;
	}
	if (j == strlen1(word))
		return 1;


}
int count_word_in_str_way_1(char *str, char *word){
	int i = 0, j = 0;
	int k = 0;
	//i=(int *)malloc(sizeof(int));
	while (str[i] != '\0'&&i <= strlen1(str))
	{
		if (str[i] == word[j])
		{
			if (countFre(str, word, i)){
				i = i + strlen1(word);
				k++;
			}

		}
		else
			i++;
	}
	return k;

}

int count_word_int_str_way_2_recursion(char *str, char *word){
	int i = 0, j = 0;
	int k = 0;

	if (str[i] != '\0'&&i <= strlen1(str))
	{
		if (str[i] == word[j])
		{
			if (countFre(str, word, i)){
				i = i + strlen1(word);
				k++;
			}

		}
		else
			i++;
	}
	if (str[i] != '\0'&&i <= strlen1(str))
	{
		count_word_int_str_way_2_recursion(str, word);

	}
	else
		return k;
}

