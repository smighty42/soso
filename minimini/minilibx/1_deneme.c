#include "../minilibx-linux/mlx.h"
#include <stddef.h>
#define KEDI "./textures/bubu.xpm"

void *mlx;
void *window;
void *img;
int w, h;
int x_pos = 70; 
int y_pos = 70; 

int key_hook(int keycode, void *param)
{
    if (keycode == 65361) 
    {
        x_pos -=60;  
    }
   
    if (keycode == 65363) 
    {
        x_pos +=60;  
    }
   
    if (keycode == 65362) 
    {
        y_pos -=60; 
    }
   
    if (keycode == 65364) 
    {
        y_pos +=60; 
    }
    mlx_clear_window(mlx, window); 
    mlx_put_image_to_window(mlx,window,img,x_pos,y_pos);

    return 0;
}

int main()
{
    mlx = mlx_init();  
    window = mlx_new_window(mlx, 1280, 720, "KEDİ"); 
    img = mlx_xpm_file_to_image(mlx, KEDI, &w, &h); 
    mlx_put_image_to_window(mlx, window, img, x_pos, y_pos);
    mlx_key_hook(window, key_hook, NULL);
    mlx_loop(mlx);
}
