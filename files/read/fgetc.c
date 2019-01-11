#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {  
FILE* fichier = NULL;  
int caractereActuel = 0;  
fichier = fopen("test.txt", "r");  
if (fichier != NULL)  { 
printf("file existe");
caractereActuel = fgetc(fichier); 
// On initialise caractereActuel 
// Boucle de lecture des caractères un à un 
while (caractereActuel != EOF) 
// On continue tant que fgetc n'a pas retourné EOF 
{ 
 
printf("%c", caractereActuel); 
// On affiche le caractère stocké dans caractereActuel  
caractereActuel = fgetc(fichier); 
// On lit le caractère suivant 
} 
fclose(fichier);  
}  
return 0; 
}
