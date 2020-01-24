#ifndef FDF_H
# define FDF_H

# include "../libft/libft.h"
# include "../minilibx_macos/mlx.h"

# define MAX(a, b) (a > b ? a : b);
# define ABS(a) (a >= 0 ? a : -a);

typedef struct s_map
{
	int	width;
	int	height;
	int	**z_matrix;
	int	zoom;
	int color;
	int shift_x;
	int shift_y;

	void	*mlx_ptr;
	void	*vin_ptr;
}				t_map;

void	read_file(char *file_name, t_map *data);

#endif