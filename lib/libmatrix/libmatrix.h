/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libmatrix.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:00:27 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/01 16:34:14 by mkocabas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBMATRIX_H
# define LIBMATRIX_H

# define TRUE 1
# define FALSE 0

# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include "../libft/libft.h"

typedef struct s_matrix
{
	int		rows;
	int		cols;
	double	**m;
}	t_matrix;

typedef struct s_vector
{
	int		size;
	double	*v;
}	t_vector;

typedef struct s_canvas
{
	double	widht;
	double	height;
	double	near;
	double	far;
	double	angle;
}	t_canvas;

typedef struct s_local_axes
{
	t_vector	*x_axis;
	t_vector	*y_axis;
	t_vector	*z_akis;
}	t_local_axes;
int				ft_dimensions_equal(const t_matrix *m1, const t_matrix *m2);
int				ft_matrix_add_double(const t_matrix *m1, \
				const double d, t_matrix *res);
int				ft_matrix_add(const t_matrix *m1, const t_matrix *m2, \
				t_matrix *res);
int				ft_matrix_mul_double(const t_matrix *m1, const double d, \
				t_matrix *res);
int				ft_matrix_mul_vector(const t_matrix *m1, const t_vector *v, \
				t_vector *res);
int				ft_matrix_mul(const t_matrix *m1, const t_matrix *m2, \
				t_matrix *res);
int				ft_matrix_scale(t_matrix *mat, t_matrix *scale, t_matrix *res);
int				ft_matrix_set_all(t_matrix *mat, double nb);
int				ft_matrix_set_vals(t_matrix *mat, double *arr, int arr_size);
int				ft_matrix_sub_double(const t_matrix *m1, const double d, \
				t_matrix *res);
int				ft_matrix_sub(const t_matrix *m1, const t_matrix *m2, \
				t_matrix *res);
int				ft_vector_normalize(t_vector *vec, t_vector *res);
int				ft_vector_scale(t_vector *vec, t_vector *scale);
int				ft_vector_set_all(t_vector *vec, double d);
int				ft_vector_set_vals(t_vector *vec, double *arr, int arr_size);
int				ft_vector_sub(t_vector *v1, t_vector *v2, t_vector *res);
int				ft_vector_to_matrix(const t_vector *vec, t_matrix *res);
int				ft_scale_matrix(int cols, int rows, t_vector *scale, \
				t_matrix *res);
int				ft_vector_add(t_vector *v1, t_vector *v2, t_vector *res);
int				ft_vector_cross(t_vector *v1, t_vector *v2, t_vector *res);
int				ft_vector_forward(t_vector *position, t_vector *target, \
				t_vector *res);
double			ft_vector_mag(t_vector *vec);
double			ft_vector_dot(t_vector *v1, t_vector *v2);
void			ft_matrix_free(t_matrix *mat);
void			ft_puterror(char *err);
void			ft_putint_fd(int nb, int fd);
void			ft_putint(int nb);
void			ft_putmatrix(t_matrix *mat);
void			ft_putstr_fd(char const *str, int fd);
void			ft_putvector(t_vector *vec);
void			ft_vector_free(t_vector *vec);
t_matrix		*ft_matrix_id(int cols, int rows);
t_matrix		*ft_matrix_new(int cols, int rows);
t_matrix		*ft_scale_matrix_xyz(double x, double y, double z);
t_vector		*ft_vector_dup(t_vector *v);
t_vector		*ft_vector_new(int size);
t_vector		*ft_vector4_new(double x, double y, double z);
#endif
