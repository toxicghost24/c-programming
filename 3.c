#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *string1, *string2, *string; //declaring the pointers for dynamic memory allocation//

	string1 = (char*)calloc(255,sizeof(char)); // alloting the size of memory to store the strings//
	string2 = (char*)calloc(255,sizeof(char));
	

	scanf("%s",string1);	//reading the strings into the alloted memories// 
	scanf("%s",string2);

	int len1 = strlen(string1);//length of strings
	int len2 = strlen(string2);
	string = (char*)calloc(len1 + len2 + 1,sizeof(char));  //string is memory alloted to store the concatanated strings//

	for(int i = 0;i <len1;i++)   // concatanating the strings//
	{
		string[i] = string1[i];
	}

	for(int i = 0;i < len2;i++)
	{
		string[len1] = string2[i];
		len1++;
	}
	
	printf("%s",string);
}
