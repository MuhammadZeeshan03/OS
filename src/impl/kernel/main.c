#include "print.h"

// Number of lines for the alphabet's pattern
int height = 5;
// Number of character width in each line
int width = 9;
void kernel_main(){
   print_clear();

 
 print_str("\n\n\n");
//print_str("<------------------------>");

//print_str("ZEESHAN\n");

print_str("<--Muhammad Zeeshan---->\n");
print_str("<--BSCS 9B (282442)---->\n");

    
 char character = 'N';
 
    print_Pattern(character);

    char character1 = 'U';
        print_Pattern(character1);
        print_str("\n");


    char character2 = 'S';
        print_Pattern(character2);
        print_str("\n");


    char character3 = 'T';
    print_Pattern(character3);

print_str("<-------------->");
}


    
int abs(int d){
    return d < 0 ? -1 * d : d;
}


//To print " N " on the console 
void print_N()
{    print_set_color(PRINT_COLOR_WHITE,PRINT_COLOR_BLACK);
    int i, j, counter = 0;
    for (i = 0; i < height; i++) {
        print_str("*");
        for (j = 0; j <= height; j++) {
            if (j == height)
                print_str("*");
            else if (j == counter)
                print_str("*");
            else
                print_str(" ");
        }
        counter++;
        print_str("\n");
    }
}


  
//To print " U " on the console
void print_U()
{ print_set_color(PRINT_COLOR_YELLOW,PRINT_COLOR_BLACK);
    int i, j;
    for (i = 0; i < height; i++) {
        if (i != 0 && i != height - 1)
            print_str("*");
        else
            print_str(" ");
        for (j = 0; j < height; j++) {
            if (((i == height - 1)
                 && j >= 0
                 && j < height-1 ))
                print_str("*");
            else if (j == height - 1 && i != 0
                     && i != height - 1)
                print_str("*");
            else
                print_str(" ");
        }
        print_str("\n");
    }
}


//To print " S " on the console
void print_S()
{  print_set_color(PRINT_COLOR_LIGHT_GREEN,PRINT_COLOR_BLACK);
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height / 2
                 || i == height - 1))
                print_str("*");
            else if (i < height / 2
                     && j == 0)
                print_str("*");
            else if (i > height / 2
                     && j == height - 1)
                print_str("*");
            else
                print_str(" ");
        }
        print_str("\n");
    }
}
  
//To print " T " on the console
void print_T()
{ print_set_color(PRINT_COLOR_CYAN,PRINT_COLOR_BLACK);
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (i == 0)
                print_str("*");
            else if (j == height / 2)
                print_str("*");
            else
                print_str(" ");
        }
        print_str("\n");
    }
}


void print_Pattern(char character)
{
    switch (character) {
    
    case 'N':
        print_N();
        break;
        case 'U':
        print_U();
        break;
        case 'S':
        print_S();
        break;
    case 'T':
        print_T();
        break;
    default:
        print_str("Wrong Input");
    
    
    }
}