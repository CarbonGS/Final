//CPR final project V1
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"
#include <stdio.h>
#include <string.h>


	/* Version 1 */
/*void tokenizing(void) {
	printf("*** Start of tokenizing Demo ***\n");
	char words[BUFFER_SIZE];
	char* nextWord = NULL;
	int wordsCounter;
	do {
		printf("Type a few Words Separated by Space (q to quit):\n");
		fgets(words, BUFFER_SIZE, stdin);
		words[strlen(words) - 1] = '\0';
		if (strcmp(words, "q") != 0) {
			nextWord = strtok(words, " ");
			wordsCounter = 1;
			while (nextWord) {
				printf("word #%d is \'%s\'\n", wordsCounter++, nextWord);
				nextWord = strtok(NULL, " ");

			}
		}

	} while (strcmp(words, "q") != '\0');
	printf("*** End of tokenizing words Demo");
}
*/

	/* Version 2 */
	//>> insert here
/*void tokenizing(void) {
	printf("*** Start of Tokenizing Phrases Demo **\n");
	char phrases[BUFFER_SIZE];
	char* nextPhrase = NULL;
	int phrasesCounter;
	do {
		printf("Type a few Phrases Seperated by comma(q - to quit):\n");
		fgets(phrases, BUFFER_SIZE, stdin);
		phrases[strlen(phrases) - 1] = '\0';
		if ((strcmp(phrases, "q") != 0)) {
			nextPhrase = strtok(phrases, ",");
			phrasesCounter = 1;
			while (nextPhrase) {
				printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);
				nextPhrase = strtok(NULL, ",");
			}
		}
	} while (strcmp(phrases, "q") != 0);
	printf("*** End of Tokenizing Phrases Demo ***\n\n");
}
*/
	/* Version 3 */
	//>> insert here

void tokenizing(void) {
	printf("*** Start of Tokenizing Sentences Demo ***\n");
	char sentences[BUFFER_SIZE];
	char* nextSentence = NULL;
	int sentencesCounter;
	do {
		printf("Type a few Phrases Seperated by periods(q - to quit):\n");
		fgets(sentences, BUFFER_SIZE, stdin);
		sentences[strlen(sentences) - 1] = '\0';
		if ((strcmp(sentences, "q") != 0)) {
			nextSentence = strtok(sentences, ".");
			sentencesCounter = 1;
			while (nextSentence) {
				printf("Phrase #%d is \'%s\'\n", sentencesCounter++, nextSentence);
				nextSentence = strtok(NULL, ".");
			}
		}
	} while (strcmp(sentences, "q") != 0);
	printf("*** End of Tokenizing Sentences Demo ***\n");
}



