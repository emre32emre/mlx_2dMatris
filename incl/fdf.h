#ifndef FDF_H
# define FDF_H

# include "../lib/libmlx/mlx.h"
# include <math.h>
# include <stdio.h>
# include "../lib/libft/libft.h"
# include "../lib/libmatrix/libmatrix.h"
# include "key_kod.h"

# define WIDTH 1920
# define HEIGHT 1080


typedef struct s_scene
{
    void    *mlx;
    void    *mlx_wdw;
    void			*frame;
	char			*frame_buf;
	int				pixel_bits;
	int				line_bytes;
	int				pixel_endian;
    int				redraw;
    double          my_angle;
    double          my_scale_fac;
    double          my_dx;
    double          my_dy;
}   t_scene;

int					handle_exit_event(void);
int				handle_key_press(int key, void *param);

int					draw(t_scene *scene);

int				handle_loop(void *params);

t_scene				*new_scene(void *mlx, void *mlx_wdw);


void				draw_ui(t_scene *scene);

#endif