
#include <stdio.h>
#include <unistd.h>
#include <math.h>

#define WIDTH 80
#define HEIGHT 25
#define ANSI_COLOR_YELLOW       "\x1b[33m"
#define ANSI_COLOR_BLUE         "\x1b[34m"
#define ANSI_COLOR_MAGENTA      "\x1b[35m"
#define ANSI_COLOR_CYAN         "\x1b[36m"
#define ANSI_COLOR_WHITE        "\x1b[37m"
#define ANSI_RESET_ALL          "\xlb[0m"

struct Circle 
{       /* data */
        double x, y, r, v_x, v_y;
};

void clear_screen() 
{
        printf("\033[2J"); 
}

void move_cursor_beginning_of_screen() 
{
        printf("\033[H");
}

void visualize(struct Circle circle) 
{
    for (int y = 0; y < HEIGHT; y++) 
    {
        for (int x = 0; x < WIDTH; x++)
         {
            double distance = sqrt(pow(x - circle.x, 2) + pow(y - circle.y, 2));

            if (distance < circle.r) 
            {
                    printf("#");
            }   else 
                    printf(".");
        
        }
            printf("\n");
    }
}

void step(struct Circle *circle) 
{
    
    circle->x += circle->v_x;
    circle->y += circle->v_y;

   
    if (circle->x - circle->r < 0 || circle->x + circle->r >= WIDTH) 
             circle->v_x = -circle->v_x; 
    
    if (circle->y - circle->r < 0 || circle->y + circle->r >= HEIGHT) 
             circle->v_y = -circle->v_y;
    
}

int main() 
{
    struct Circle circle = {10, 10, 5, 1, 1}; // Initial circle state
    printf(ANSI_COLOR_BLUE);
    while (1) 
    {
            clear_screen();
            move_cursor_beginning_of_screen();
            visualize(circle);
            step(&circle);
            usleep(100000); // Adjust delay for smoother animation
    }

        return 0;
}