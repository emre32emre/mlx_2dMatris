#include "fdf.h"

int				handle_key_press(int key, void *param)
{
    t_scene *scene;
    scene = (t_scene *)param;
    if (key == KEY_ESC)
		exit(0);
    if (key == KEY_W) scene->my_angle++;
    
    if (key == KEY_S) scene->my_angle--;
  
    if (key == KEY_1) scene->my_scale_fac += 0.1;
    
    if (key == KEY_2) scene->my_scale_fac -= 0.1;

    if (key == KEY_UP) scene->my_dy -= 3;

    if (key == KEY_DOWN) scene->my_dy += 3;
    if (key == KEY_LEFT) scene->my_dx -= 3;
    if (key == KEY_RIGHT) scene->my_dx += 3;
    
    return (1);
}