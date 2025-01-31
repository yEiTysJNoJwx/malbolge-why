#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
    // ARGV IS ASCII
    int ascii = atoi(argv[1]);
    int c = atoi(argv[2]) - 1;

    if (!((ascii >= 33) && (ascii <= 126))) {
        printf("ERR: NOT GRAPHICAL (%s)\n", argv[1]);
        exit(1);
    }

    int i = (ascii - 33 + c) % 94;

    char* characters = "+b(29e*j1VMEKLyC})8&m#~W>qxdRp0wkrUo[D7,XTcA\"lI.v%{gJh4G\\-=O@5`_3i<?Z';FNQuY]szf$!BS/|t:Pn6^Ha";
    char* returnCharacters = "5z]&gqtyfr$(we4{WP)H-Zn,[%\\3dL+Q;>U!pJS72FhOA1CB6v^=I_0/8|jsb9m<.TVac`uY*MK'X~xDl}REokN:#?G\"i@";

    char instruction = characters[i];

    int returnIndex = instruction - 33;
    char returnCharacter = returnCharacters[returnIndex];

    printf("instruction: %c\n", instruction);
    printf("return: %c\n", returnCharacter);

    return 0;
}