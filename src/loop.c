#include "fdf.h"

int				handle_loop(void *params)
{
	t_scene		*scene;

	scene = (t_scene*)params;
	if (scene->redraw == FALSE)
		draw(scene);
	return (0);
}
