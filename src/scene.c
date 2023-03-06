#include "fdf.h"
int					scene_render_params(t_scene *scene,
					void *mlx, void *mlx_wdw)
{
	scene->mlx = mlx;
	scene->mlx_wdw = mlx_wdw;
	scene->pixel_bits = 32; // 8 x 4 (r,g,b,a)
	scene->line_bytes = WIDTH * 4;
	scene->pixel_endian = TRUE;
    scene->frame = mlx_new_image(mlx,WIDTH,HEIGHT);
    scene->frame_buf = mlx_get_data_addr(scene->frame, &scene->pixel_bits,
			&scene->line_bytes, &scene->pixel_endian);
    printf("***************\n%s\n",scene->frame_buf);
	if (scene->frame == NULL || scene->frame_buf == NULL)
		return (FALSE);
	scene->redraw = FALSE;
	return (TRUE);
}

t_scene				*new_scene(void *mlx, void *mlx_wdw)
{
	t_scene		*scene;

    scene = (t_scene*)malloc(sizeof(*scene));
	if (scene == NULL)
		return (NULL);


	if (scene_render_params(scene, mlx, mlx_wdw) == FALSE)
		return (NULL);
	return (scene);
}