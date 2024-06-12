#include <stdio.h>
#include <stdlib.h>
void draw_circle(void);
void draw_intersect(void);
void draw_base(void);
void draw_triangle(void);

    int main(void)
        {
	        draw_circle();
	        draw_triangle();
	        draw_intersect();
	        system("pause");
	        return(0);
        }

    void draw_circle(void)
        {
	        puts("     *     ");
	        puts("  *     *  ");
	        puts("    *  *   ");
        }

    void draw_intersect(void)
        {
	        puts("    /\\     ");
	        puts("   /  \\    ");
	        puts("  /    \\   ");
        }

    void draw_base(void)
        {
	        puts("  _____");
        }
    
    void draw_triangle(void)
        {
	        draw_intersect();
	        draw_base();
        }

