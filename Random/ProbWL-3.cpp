#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Fungsi untuk menggabungkan warna sesuai aturan yang diberikan
char combineColors(char color1, char color2) {
    if (color1 == 'R' && color2 == 'B') {
        return 'M'; // Red + Blue = Magenta
    } else if (color1 == 'M' && color2 == 'R') {
        return 'R'; // Magenta + Red = Red
    } else if (color1 == 'M' && color2 == 'G') {
        return 'W'; // Magenta + Green = White
    } else if (color1 == 'G' && color2 == 'M') {
        return 'W'; // Green + Magenta = White
    } else {
        return color1; // Primary + Primary atau Secondary + Primary Penyusun
    }
}

int main() {
    int x, y, b;
    cin >> x >> y >> b;

    vector<vector<char> > grid(x, vector<char>(y, ' '));

    for (int i = 0; i < b; i++) {
        int xbom, ybom;
        char type;
        cin >> xbom >> ybom >> type;

        // Pengecualian jika koordinat bom tidak valid
        if (xbom < 0 || xbom >= x || ybom < 0 || ybom >= y) {
            continue;
        }

        char& cell = grid[xbom][ybom];

        if (cell == ' ') {
            cell = type;
        } else {
            cell = combineColors(cell, type);
        }
    }

    // Menampilkan grid
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            if (grid[i][j] == ' ') {
                cout << "| |";
            } else {
                cout << "|" << grid[i][j] << "|";
            }
        }
        cout << endl;
    }

    return 0;
}
