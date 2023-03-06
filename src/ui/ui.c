#include "fdf.h"

void				draw_ui(t_scene *scene)
{

	mlx_string_put(scene->mlx, scene->mlx_wdw, 10, 20, 0xFFFF00, "MOVE : ARROW");
    mlx_string_put(scene->mlx, scene->mlx_wdw, 10, 40, 0xFFFF00, "Angle + : W");
    mlx_string_put(scene->mlx, scene->mlx_wdw, 10, 60, 0xFFFF00, "Angle - : S");
	mlx_string_put(scene->mlx, scene->mlx_wdw, 10, 80, 0xFFFF00, "SCALE + : 1");
    mlx_string_put(scene->mlx, scene->mlx_wdw, 10, 100, 0xFFFF00, "SCALE - : 2");

}
