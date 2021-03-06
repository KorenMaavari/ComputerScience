/*-------------------------------------------------------------------------
  Include files:
--------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


/*-------------------------------------------------------------------------
  Constants and definitions:
--------------------------------------------------------------------------*/

#define MASCULINE (1)
#define FEMININE (2)

#define UN (1)
#define UNO (2)
#define UNA (3)
#define UN_APOSTROPHE (4)


/* put your #defines and typedefs here*/
int get_gender(char* noun);
int get_indefinite_article(char* noun);
int get_length_indefinite_article(char* noun);
void add_indefinite_article(char* noun, char* noun_with_article);
void handle_indefinite_article(int max_length);


/*-------------------------------------------------------------------------
  Your implementation of the functions (describe what each function does)
 -------------------------------------------------------------------------*/



/*-------------------------------------------------------------------------
  The main program
 -------------------------------------------------------------------------*/

/**
 * main - reads two integers and calls handle_indefinite_article() accordingly.
 * 
 * @returns the status, for the operating system.
 */
int main() {
	int max_length, num_of_nouns;
	scanf("%d %d", &max_length, &num_of_nouns);
	for(int i = 0; i < num_of_nouns; i++) {
		handle_indefinite_article(max_length);
	}
	return 0;
}