#ifndef MINIRT_H
# define MINIRT_H
# define DOUBLE_PREC 0.0001

# include <math.h>
# include <pthread.h>
# include <errno.h>
# include <error.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <mlx.h>

# include "../lib/libft/libft.h"
# include "../lib/gnl/get_next_line.h"

# include "../src/entities/tuple/tuple.h"
# include "../src/entities/matrix/matrix.h"
# include "../src/entities/ray/ray.h"
# include "../src/entities/light/light.h"
# include "../src/entities/color/colors.h"
# include "../src/entities/material/material.h"
# include "../src/entities/shapes/shape.h"
# include "../src/entities/shapes/cone/cone.h"
# include "../src/entities/shapes/cube/cube.h"
# include "../src/entities/shapes/cylinder/cylinder.h"
# include "../src/entities/shapes/plane/plane.h"
# include "../src/entities/shapes/sphere/sphere.h"
# include "../src/entities/shapes/triangle/triangle.h"
# include "../src/entities/shapes/square/square.h"
# include "../src/entities/world/world.h"
# include "../src/entities/intersection/intersection.h"
# include "../src/entities/bmp/bmp.h"
# include "../src/entities/camera/camera.h"

# include "../src/service/files/scene.h"
# include "../src/service/window/window.h"
# include "../src/service/errs/err.h"

int     min(int a, int b);
int     max(int a, int b);
double  max_d(double a, double b);
double  mins(double *a, int length);
double  maxs(double *a, int length);
void    swap(double *x, double *y);

#endif