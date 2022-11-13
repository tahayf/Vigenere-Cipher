#include <stdio.h>
#include <string.h>
#include <time.h>

#define SIZE 4094 // 4094 is the limit why I don't know

int main(){
    int 	i,j = 0;
    char    plainText[SIZE];
    char    key[SIZE];
    char    encryptedText[SIZE];
    int 	forLoop;

    printf("Text to cipher (with capital letters and without space): ");
    scanf("%[^\n]*c",plainText);

    printf("Key (also with capital letters and without space): ");
    scanf("%s",key);

    for(i = 0; i < strlen(plainText); i++){
    	encryptedText[i] = ((key[j]-65)+(plainText[i]-65))%26 + 65; // 65 comes from some ASCII chart things
    	j++;
    	if(j == strlen(key)){
    		j = 0;
		}
	}
	
	// This is improved version of Vigenere Cipher which called Autokey Cipher. 
	// Fun fact Vigenere Cipher wasn't invented by Blaise de Vigenere.
	/*for(i = 0; i < strlen(plainText); i++){
		if(i < strlen(key)){
			encryptedText[i] = ((key[i]-65)+(plainText[i]-65))%26 + 65;
		}else{
				encryptedText[i] = ((plainText[i-strlen(key)]-65)+(plainText[i]-65))%26 + 65;
		}
	}*/
	
	
	printf("Ciphertext: %s",encryptedText);
	printf("\nFor loop run %d times",strlen(plainText));
	
	
    return 0;
}
