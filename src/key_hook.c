
#include "fractol.h"

int		fol_key_hook(int keycode, t_args *args)
{
	if (keycode == 53)
		exit_fol(args);
	else if (keycode == 78)
		args->it--;
	else if (keycode == 69)
		args->it++;
	else if (keycode == 126)
		args->y_offset -= (10 * ZOOM);
	else if (keycode == 125)
		args->y_offset += (10 * ZOOM);
	else if (keycode == 123)
		args->y_offset -= (10 * ZOOM);
	else if (keycode == 124)
		args->y_offset += (10 * ZOOM);
	else if (keycode == 37)
		args->lock_mouse = (args->lock_mouse) ? 0 : 1;
	fol_reset_display(args);
	return (1);
}