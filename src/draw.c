#include "fdf.h"

void drawLine(t_vector *vec1, t_vector *vec2, t_scene *scene);

void draw_triangle(t_vector *vec1, t_vector *vec2, t_vector *vec3,t_scene *scene);
void my_mlx_pixel_put(t_scene *scene,int x, int y, int color);

void mat_mul(t_matrix *matris, t_vector *vec1, t_vector *vec2, t_vector *vec3)
{
	ft_matrix_mul_vector(matris,vec1,vec1);
	ft_matrix_mul_vector(matris,vec2,vec2);
	ft_matrix_mul_vector(matris,vec3,vec3);

}

static void			clear_frame(t_scene *scene)
{
	int		x;
	int		y;
	int		pixel;



	y = 0;
	while (y < HEIGHT)
	{
		x = 0;
		while (x < WIDTH)
		{
			pixel = y * scene->line_bytes + x * 4;
			scene->frame_buf[pixel] = 00;
			scene->frame_buf[pixel + 1] = 00;
			scene->frame_buf[pixel + 2] = 00;
			scene->frame_buf[pixel + 3] = 00;
			x++;
		}
		y++;
	}
}

int					draw(t_scene *scene)
{
    
	
	mlx_clear_window(scene->mlx, scene->mlx_wdw);

	t_vector *vec1 = ft_vector_new(3);
	t_vector *vec2 = ft_vector_new(3);
	t_vector *vec3 = ft_vector_new(3);

	double p1[] = {200,50,1};
	double p2[] = {300,200,1};
	double p3[] = {100,200,1};

	ft_vector_set_vals(vec1,p1,3);
	ft_vector_set_vals(vec2,p2,3);
	ft_vector_set_vals(vec3,p3,3);

	t_matrix *rotate = ft_matrix_new(3,3);
//	double angle = 90;


	rotate->m[0][0] = cosf(scene->my_angle * M_PI / 180);
	rotate->m[0][1] = -sinf(scene->my_angle * M_PI / 180);
	rotate->m[1][0] = sinf(scene->my_angle * M_PI / 180);
	rotate->m[1][1] = cosf(scene->my_angle * M_PI / 180);
	rotate->m[2][2] = 1;

	t_matrix *scale = ft_matrix_new(3,3);
	//double scale_fac = 2;
	scale->m[0][0] = scene->my_scale_fac;
	scale->m[1][1] = scene->my_scale_fac;
	scale->m[2][2] = 1;

	t_matrix *tranform = ft_matrix_id(3,3);
	tranform->m[0][2] = scene->my_dx;
	tranform->m[1][2] = scene->my_dy;

	
	
	//scene->my_dx += 3;

	mat_mul(rotate,vec1,vec2,vec3);

	mat_mul(scale,vec1,vec2,vec3);

	mat_mul(tranform,vec1,vec2,vec3);




	draw_triangle(vec1,vec2,vec3,scene);

	printf("************************\n");
	printf("angle :%.2f\nscale :%.2f\ndx :%.2f ,dy :%.2f\n",scene->my_angle,scene->my_scale_fac, scene->my_dx,scene->my_dy);
	



	mlx_put_image_to_window(scene->mlx,scene->mlx_wdw,scene->frame,0,0);
	draw_ui(scene);
	clear_frame(scene);
		//scene->redraw = FALSE;


	return (0);
}

void draw_triangle(t_vector *vec1, t_vector *vec2, t_vector *vec3,t_scene *scene)
{
	drawLine(vec1,vec2,scene);
	drawLine(vec2,vec3,scene);
	drawLine(vec3,vec1,scene);
}

//void drawLine(int x1, int x2, int y1, int y2, void *mlx , void *mlx_win)
void drawLine(t_vector *vec1, t_vector *vec2, t_scene *scene)
{
	int dx, dy, i, e;
	int incx,incy,inc1,inc2;
	int x, y;

	dx = vec2->v[0] - vec1->v[0];
	dy = vec2->v[1] - vec1->v[1];
	// dx = x2 - x1;
	// dy = y2 - y1;

	if (dx < 0) dx = -dx;
	if (dy < 0) dy = -dy;
	incx = 1;
	if (vec2->v[0] < vec1->v[0]) incx = -1;
	//if (x2 < x1) incx = -1;
	incy = 1;
	if (vec2->v[1] < vec1->v[1]) incy = -1;
	//if (y2 < y1) incy = -1;
	x = vec1->v[0];
	y = vec1->v[1];
	// x = x1;
	// y = y1;
	if (dx > dy)
	{
		my_mlx_pixel_put(scene, x, y, 0xFFFFFF);
		e = 2 * dy - dx;
		inc1 = 2*(dy-dx);
		inc2 = 2*dy;
		for(i = 0;i<dx;i++)
		{
			if(e >= 0)
			{
				y += incy;
				e += inc1;
			}
			else
			{
				e += inc2;
			}
			x += incx;
			my_mlx_pixel_put(scene, x, y, 0xFFFFFF);
		}
	}
	else
	{
		my_mlx_pixel_put(scene, x, y, 0xFFFFFF);
		e = 2 *dx-dy;
		inc1 = 2*(dx-dy);
		inc2 = 2*dx;
		for(i = 0;i<dy;i++)
		{
			if(e >= 0)
			{
				x+= incx;
				e += inc1;
			}
			else
			{
				e += inc2;
			}
			y += incy;
			my_mlx_pixel_put(scene, x, y, 0xFFFFFF);
		}
	}
}

void my_mlx_pixel_put(t_scene *scene,int x, int y, int color)
{
	char *dst;

	dst = scene->frame_buf + (y * scene->line_bytes + x * (scene->pixel_bits / 8));
	*(unsigned int*)dst = color;
}