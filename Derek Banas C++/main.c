/*Maak een programma test.c dat twee strings (char arrays) inleest van maximaal 100 tekens,
deze twee strings omzet naar hoofdletters (to_upper) en afdrukt met newlines achter elk woord.

Dus als het programma als input krijgt:
aap noot
dan moet de output
AAP
NOOT
zijn.

Tip: met toupper(char) uit ctype.h kun je de hoofdletter van een char krijgen.
Dus naam[x] = toupper(naam[x]) wijzigt een letter uit een string naar hoofdletter.
Het einde van een string is altijd '\0' dus om door een string s te wandelen met een while zou je
while ( s[i] != '\0')kunnen gebruiken of met een pointer while (*p).

Let op: als het lijkt alsof je programma dezelfde output levert als de controle bij
evaluate kan het zijn dat je niet achter elk woord een newline hebt staan, of 1 teveel!*/
#include <stdio.h>
#include <ctype.h>
#define MAX_LIMIT 100

int teller = 0;
int woord_2 = 0;
char st[97];
char st2[98];
int teller2 = 0;
int main()
{
    char s[MAX_LIMIT];
    printf("Voer 2 string in(max lengte 100 characters): \n");

    fgets(s, MAX_LIMIT, stdin);

    while (s[teller] != '\0')
    {
        s[teller] = toupper(s[teller]);

        if(s[teller] == ' '){
            woord_2 = 1;
            teller++;
        }
        if(woord_2){
            st2[teller2] = s[teller];
            teller2++;
        }else{
            st[teller] = s[teller];
        }
        teller++;
    }

    printf("%s \n%s", st, st2);
    return(0);
}