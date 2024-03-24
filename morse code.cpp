#include <iostream>
#include <string>

using namespace std;

void To_morse(char a) {
    if (a == 'A') {
        cout <<".-";
    }else if (a == 'B') {
        cout << "-...";
    }else if (a == 'C') {
        cout << "-.-.";
    }else if (a == 'D') {
        cout << "-..";
    }else if (a == 'E') {
        cout << ".";
    }else if (a == 'F') {
        cout << "..-.";
    }else if (a == 'G') {
        cout << "--.";
    }else if (a == 'H') {
        cout << "....";
    }else if (a == 'I') {
        cout << "..";
    }else if (a == 'J') {
        cout << ".---";
    }else if (a == 'K') {
        cout << "-.-";
    }else if (a == 'L') {
        cout << ".-..";
    }else if (a == 'M') {
        cout << "--";
    }else if (a == 'N') {
        cout << "-.";
    }else if (a == 'O') {
        cout << "---";
    }else if (a == 'P') {
        cout << ".--.";
    }else if (a == 'Q') {
        cout << "--.-";
    }else if (a == 'R') {
        cout << ".-.";
    }else if (a == 'S') {
        cout << "...";
    }else if (a == 'T') {
        cout << "-";
    }else if (a == 'U') {
        cout << "..-";
    }else if (a == 'V') {
        cout << "...-";
    }else if (a == 'W') {
        cout << ".--";
    }else if (a == 'X') {
        cout << "-..-";
    }else if (a == 'Y') {
        cout << "-.--";
    }else if (a == 'Z') {
        cout << "--..";
    }
}

 void To_Text(char z) {
    if  (z == '.-') {
        cout << 'A';
    }else if (z == '-...') {
        cout << 'B';
    }else if (z == '-.-.') {
        cout << 'C';
    }else if (z == '-..') {
        cout << 'D';
    }else if (z == '.') {
        cout << 'E';
    }else if (z == '..-.') {
        cout << 'F';
    }else if (z == '--.') {
        cout << 'G';
    }else if (z == '....') {
        cout << 'H';
    }else if (z == '..') {
        cout << 'I';
    }else if (z == '.---') {
        cout << 'J';
    }else if (z == '-.-') {
        cout << 'K';
    }else if (z == '.-..') {
        cout << 'L';
    }else if (z == '--') {
        cout << 'M';
    }else if (z == '-.') {
        cout << 'N';
    }else if (z == '--.-') {
        cout << 'O';
    }else if (z == '.--.') {
        cout << 'P';
    }else if (z == '--.-.') {
        cout << 'Q';
    }else if (z == '.-.-.') {
        cout << 'R';
    }else if (z == '...-') {
        cout << 'S';
    }else if (z == '-..-') {
        cout << 'T';
    }else if (z == '-') {
        cout << 'U';
    }else if (z == '--..') {
        cout << 'V';
    }else if (z == '.--') {
        cout << 'W';
    }else if (z == '-..-.') {
        cout << 'X';
    }else if (z == '-.--.') {
        cout << 'Y';
    }else if (z == '--..--') {
        cout << 'Z';
    }else if (z == ' '){
        cout << "   ";
    }
}

int main() {
    cout << "1-Text to morse code" << endl << "2-Morse code to text " << endl << "3-Exit" <<endl;
    int choice;
    cin >> choice;

    if (choice == 1) {
        string text;
        cout << "Please Enter a text: ";
        getline(cin >> ws, text);
        for (int i = 0; i < text.length(); i++) {
            To_morse(toupper(text[i]));
            cout << " ";
        }

    }else if (choice == 2) {
        string letter;
        string morse;
        cout << "Please Enter a morse code: ";
        getline(cin >> ws, morse);
        for (int i = 0 ; i < morse.length(); i++) {
            if (morse[i] != ' ') {
                letter = letter + morse[i];
                To_Text(morse[i]);
            } else if (morse[i] == ' '){
                for (int j = 0; j < letter.length(); j++) {
                    To_Text(toupper(letter[j]));
                }
                letter = "";
            cout << " ";
            }
        }
    }
    return 0;
}