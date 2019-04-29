/*
   Title: Caesar Cipher
   This program takes in a plain text and produces a rotatioon cipher of that text using the key
          How it works: Suppose Letter = a = 0, b=1, c=2, d=3, e=4
          you will need an input file where you input the text ypu either want to encript or dercript 
                key = 1
                so the letter a = 1 etc
                for ascii we need to use capital letters so they are A = 65, B = 66,.... etc up to Z = 90
 for decrpytion 
    to change from encrpytion to decryption change the key from a postive number used to encrpyt to a negative number 
    
    
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void CC(char* input, int key);


int main(){
    
    int key = -1 ;
	char input[200] ; // set lenght to some big number as it required a length 
	
    scanf("%[^'\n']s", &input);  // scanning from the input file and being able to scan multiple words from a file 
    printf("The original text is: %s\n", input );
    
    printf("The ciphered text is: " );
    
    CC(input, key); // this prints the encrypted text 
    
    printf("\n");
    
    printf("The rotation amount is %d", key);
}

void CC(char* input, int key) {
    
    int i = 0 ;   
    int newascii; // this is the ascii number of the encrypted letter after going through the algorythm 
    char  cipheredletter; // this is that number above converted nback to a letter giving the new letter 
    
       
        
        while( input[i] != 0 && strlen(input) > i){             
            
        newascii = ((int)input[i] + key + 65 ) %26  + 65 ;   // alogorithm to find the ascii number for the new letter                                                             

            if(newascii < 65 || newascii > 91 ){  // if the ascii number isnt between these numbers it is not a letter 
                
                cipheredletter = input[i];          // by doing this it is making the ciphered text the same as the original so the cipered text will print spaces and symbols 
                printf("%c", cipheredletter);
                
            }                                                   
            else{
                cipheredletter = (char)(newascii) ;     // this else statement changes the numbers that do it in between 65 and 92 whoch are all the letters so it prints the ci[hered letters]

                printf("%c", cipheredletter);
            };
            

          
        i++;  // this takes it to the next letter in the word 
        
  
        }
        
}

/*
 * this is a go at the the substitution cipher 
 *      the idea of this one is to encrypt a letter based a a list of alternates to change it to 
 *      i need  to write a new function and need to create 2 arrays with with coreespoding ascii numbers to the ones i want to 
 *      change it to and from.
 */


    
    
    
    
    
    
    
    

 
 
    




