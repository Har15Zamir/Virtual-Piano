#include <stdio.h>
#include <conio.h>
#include <windows.h>

void playnote(char note) {
    if (note == 'A') Beep(440, 500);    
    else if (note == 'B') Beep(494, 500);  
    else if (note == 'C') Beep(523, 500);  
    else if (note == 'D') Beep(587, 500);  
    else if (note == 'E') Beep(659, 500);  
    else if (note == 'F') Beep(698, 500);  
    else if (note == 'G') Beep(784, 500);  
    else if (note == 'H') Beep(554, 500);  
    else if (note == 'I') Beep(622, 500);  
    else if (note == 'J') Beep(740, 500);  
    else if (note == 'K') Beep(831, 500);  
}

int main() {
    char option;
    char key;
    char *song = "0";  
    int i = 0;

    printf("Welcome to the Virtual Piano\n");
    printf("\nChoose a song to play:\n");
    printf("\n(A) Happy Birthday\n(B) Twinkle Twinkle Little Star\n(C) Pakistan National Anthem\n(D) Dil Dil Pakistan\n");
    scanf(" %c", &option);

    printf("Excellent Choice\n");
    if (option == 'A') {
    song = "G G A G C B G G A G D C G G E C B A F F E C D C";
    } else if (option == 'B') {
    song = "C C G G A A G F F E E D D C G G F F E E D G G F F E E D C C G G A A G F F E E D D C";
    } else if (option == 'C') {
    song = "C E F G A F G C C G G A A F E D E E F D E G A B C B A G F E G G F E F F E D C C D F D D B C D D D D F F G A B C G A B B C D D D C D B C G G F E F F E D C";
    } else if (option == 'D') {
    song = "A E A D D C D E A E A D D C D E A A B C G G F G A A B C D E D C B C A A A B C B A A A B C D B B B D G D F F G G A";
    } else {
    printf("Invalid Input!\n");
    return 0;
    }

    printf("Press the letter on your screen to play. Press Q to quit\n");

    while (song[i] != '\0') {
        if (song[i] != ' ') {
        printf("Press the note: %c\n", song[i]);
        while (1) {
        if (kbhit()) {
            key = getch();
            if (key == 'Q' || key == 'q') {
                printf("You chose to quit :(\n");
                return 0;
            }
        if (key == song[i]) {
        playnote(key);
        i++;
        break;
        } else {
        printf("Incorrect Note! Tyy again\n");
        }
        }
        }
        } else {
            i++;
        }
    }

    printf("Congratulations, you have finished the song :)\n");
    return 0;
}
