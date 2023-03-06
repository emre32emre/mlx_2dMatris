#include "fdf.h"
int myLoop(void *param)
{
    param = NULL;
    write(1,"asd",3);
    return 0;
}
int init_fdf()
{
    t_scene *scene;
    void    *mlx;
    void    *mlx_wdw;
    mlx = mlx_init();
    mlx_wdw = mlx_new_window(mlx,WIDTH,HEIGHT,"sa");
    scene = new_scene(mlx,mlx_wdw);

    if(mlx == NULL || mlx_wdw == NULL)
    {
        printf("Failed to create scene");
        return (0);
    }
    mlx_hook(mlx_wdw, 17, 0, handle_exit_event,scene);
    mlx_hook(mlx_wdw, 2, 0, handle_key_press,scene);

    mlx_loop_hook(mlx, handle_loop, scene);
    mlx_loop(mlx);
    return (1);
}
int main()
{
    init_fdf();
    

}