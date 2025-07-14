/*Write a filter program to display the text contained in any given file.The
program should filter any control characters out of the input with the exception
of the characters \n (end-of-line) and \t (tabulator), which are to be treated as
normal characters for the purpose of this exercise. Control characters are
defined by codes 0 to 31.
A sequence of control characters is to be represented by a single space
character.
A single character, that is, a character appearing between two control
characters, is not to be output!*/

#include <iostream>
#include <fstream>

using namespace std;

bool is_control(char c) {
    return (c >= 0 && c <= 31 && c != '\n' && c != '\t');
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cerr << "Usage: " << argv[0] << " <filename>\n";
        return 1;
    }

    ifstream fin(argv[1], ios::binary);
    if (!fin) {
        cerr << "Cannot open file: " << argv[1] << endl;
        return 1;
    }

    char c;
    bool in_control_sequence = false;
    bool skip_next_char = false;

    while (fin.get(c)) {
        if (is_control(c)) {
            if (!in_control_sequence) {
                // Start of a control sequence
                in_control_sequence = true;
                skip_next_char = true;
            }
            // Otherwise, stay in control sequence
        } else {
            if (in_control_sequence) {
                if (skip_next_char) {
                    // This is a single char between controls -> skip it
                    skip_next_char = false;
                } else {
                    // End of control sequence, output a space
                    cout << ' ';
                    cout << c;
                    in_control_sequence = false;
                }
            } else {
                cout << c;
            }
        }

        // Special handling for \n and \t: always output them
        if (c == '\n' || c == '\t') {
            cout << c;
            in_control_sequence = false;
            skip_next_char = false;
        }
    }

    // If file ended while still in control sequence, output a space
    if (in_control_sequence && !skip_next_char) {
        cout << ' ';
    }

    fin.close();
    return 0;
}
