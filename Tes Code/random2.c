#include <stdio.h>
#include <stdlib.h>

#define MAX_ROWS 5
#define MAX_COLS 5

char maze[MAX_ROWS][MAX_COLS] = {
    {'s', '.', '.', '.', '.'},
    {'.', '+', '+', '+', '.'},
    {'.', '.', '.', '.', '.'},
    {'g', '+', '+', '+', '.'},
    {'.', '.', '.', '.', '.'}
};

int visited[MAX_ROWS][MAX_COLS];
int rows = MAX_ROWS, cols = MAX_COLS, start_row, start_col;

void init_visited() {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (maze[i][j] == '+') {
                visited[i][j] = 1;  // wall
            } else if (maze[i][j] == 'g') {
                visited[i][j] = 2;  // goal
            } else {
                visited[i][j] = 0;  // empty
            }
        }
    }
}

void print_maze() {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%c", maze[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void add_crumbs() {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (maze[i][j] != 's' && visited[i][j] == 3) {
                maze[i][j] = '#';
            }
        }
    }
}

int dfs(int row, int col) {
    int *current = &visited[row][col];

    if (*current == 2) {  // goal
        return 1;
    }

    if (*current == 0) {  // empty
        *current = 1;  // mark as wall

        if (dfs(row, col - 1) || dfs(row + 1, col) || dfs(row, col + 1) || dfs(row - 1, col)) {
            *current = 3;  // mark as crumb
            return 1;
        }
    }

    return 0;
}

int main() {
    start_row = 0;
    start_col = 0;

	print_maze();
    init_visited();

    if (!dfs(start_row, start_col)) {
        printf("No path to the goal could be found.\n");
    } else {
        add_crumbs();
        print_maze();
    }

    return 0;
}
