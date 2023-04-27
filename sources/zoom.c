#include <stdio.h>
#include "lib_ppm.h"

struct subpixel_s
{
	struct pixel_s pixels[3][3];
};

struct subpixel_s createMatrix(struct pixel_s pixel)
{
	struct subpixel_s matrix;
	int r, g, b;
	r = pixel.r;
	g = pixel.g;
	b = pixel.b;
	printf("R:%d G:%d B:%d\n", r, g, b);

	if (r < 75)
	{
		for (int alt = 0; alt <= 2; alt++)
		{
			for (int larg = 0; larg <= 2; larg++)
			{
				if (larg == 0)
				{
					matrix.pixels[alt][larg].r = 0;
					matrix.pixels[alt][larg].g = 0;
					matrix.pixels[alt][larg].b = 0;
				}
			}
		}
	}
	else if (r < 135)
	{
		for (int alt = 0; alt <= 2; alt++)
		{
			for (int larg = 0; larg <= 2; larg++)
			{
				if (larg == 0 && alt == 0)
				{
					matrix.pixels[alt][larg].r = 0;
					matrix.pixels[alt][larg].g = 0;
					matrix.pixels[alt][larg].b = 0;
				}
				else if (larg == 0 && alt == 1)
				{
					matrix.pixels[alt][larg].r = 255;
					matrix.pixels[alt][larg].g = 0;
					matrix.pixels[alt][larg].b = 0;
				}
				else if (larg == 0 && alt == 2)
				{
					matrix.pixels[alt][larg].r = 0;
					matrix.pixels[alt][larg].g = 0;
					matrix.pixels[alt][larg].b = 0;
				}
			}
		}
	}
	else if (r < 179)
	{
		for (int alt = 0; alt <= 2; alt++)
		{
			for (int larg = 0; larg <= 2; larg++)
			{
				if (larg == 0 && alt == 0)
				{
					matrix.pixels[alt][larg].r = 255;
					matrix.pixels[alt][larg].g = 0;
					matrix.pixels[alt][larg].b = 0;
				}
				else if (larg == 0 && alt == 1)
				{
					matrix.pixels[alt][larg].r = 0;
					matrix.pixels[alt][larg].g = 0;
					matrix.pixels[alt][larg].b = 0;
				}
				else if (larg == 0 && alt == 2)
				{
					matrix.pixels[alt][larg].r = 255;
					matrix.pixels[alt][larg].g = 0;
					matrix.pixels[alt][larg].b = 0;
				}
			}
		}
	}
	else if (r <= 255)
	{
		for (int alt = 0; alt <= 2; alt++)
		{
			for (int larg = 0; larg <= 2; larg++)
			{
				if (larg == 0)
				{
					matrix.pixels[alt][larg].r = 255;
					matrix.pixels[alt][larg].g = 0;
					matrix.pixels[alt][larg].b = 0;
				}
			}
		}
	}

	if (g < 75)
	{
		for (int alt = 0; alt <= 2; alt++)
		{
			for (int larg = 0; larg <= 2; larg++)
			{
				if (larg == 1)
				{
					matrix.pixels[alt][larg].r = 0;
					matrix.pixels[alt][larg].g = 0;
					matrix.pixels[alt][larg].b = 0;
				}
			}
		}
	}
	else if (g < 135)
	{
		for (int alt = 0; alt <= 2; alt++)
		{
			for (int larg = 0; larg <= 2; larg++)
			{
				if (larg == 1 && alt == 0)
				{
					matrix.pixels[alt][larg].r = 0;
					matrix.pixels[alt][larg].g = 0;
					matrix.pixels[alt][larg].b = 0;
				}
				else if (larg == 1 && alt == 1)
				{
					matrix.pixels[alt][larg].r = 0;
					matrix.pixels[alt][larg].g = 255;
					matrix.pixels[alt][larg].b = 0;
				}
				else if (larg == 1 && alt == 2)
				{
					matrix.pixels[alt][larg].r = 0;
					matrix.pixels[alt][larg].g = 0;
					matrix.pixels[alt][larg].b = 0;
				}
			}
		}
	}
	else if (g < 179)
	{
		for (int alt = 0; alt <= 2; alt++)
		{
			for (int larg = 0; larg <= 2; larg++)
			{
				if (larg == 1 && alt == 0)
				{
					matrix.pixels[alt][larg].r = 0;
					matrix.pixels[alt][larg].g = 255;
					matrix.pixels[alt][larg].b = 0;
				}
				else if (larg == 1 && alt == 1)
				{
					matrix.pixels[alt][larg].r = 0;
					matrix.pixels[alt][larg].g = 0;
					matrix.pixels[alt][larg].b = 0;
				}
				else if (larg == 1 && alt == 2)
				{
					matrix.pixels[alt][larg].r = 0;
					matrix.pixels[alt][larg].g = 255;
					matrix.pixels[alt][larg].b = 0;
				}
			}
		}
	}
	else if (g <= 255)
	{
		for (int alt = 0; alt <= 2; alt++)
		{
			for (int larg = 0; larg <= 2; larg++)
			{
				if (larg == 1)
				{
					matrix.pixels[alt][larg].r = 0;
					matrix.pixels[alt][larg].g = 255;
					matrix.pixels[alt][larg].b = 0;
				}
			}
		}
	}

	if (b < 75)
	{
		for (int alt = 0; alt <= 2; alt++)
		{
			for (int larg = 0; larg <= 2; larg++)
			{
				if (larg == 2)
				{
					matrix.pixels[alt][larg].r = 0;
					matrix.pixels[alt][larg].g = 0;
					matrix.pixels[alt][larg].b = 0;
				}
			}
		}
	}
	else if (b < 135)
	{
		for (int alt = 0; alt <= 2; alt++)
		{
			for (int larg = 0; larg <= 2; larg++)
			{
				if (larg == 2 && alt == 0)
				{
					matrix.pixels[alt][larg].r = 0;
					matrix.pixels[alt][larg].g = 0;
					matrix.pixels[alt][larg].b = 0;
				}
				else if (larg == 2 && alt == 1)
				{
					matrix.pixels[alt][larg].r = 0;
					matrix.pixels[alt][larg].g = 0;
					matrix.pixels[alt][larg].b = 255;
				}
				else if (larg == 2 && alt == 2)
				{
					matrix.pixels[alt][larg].r = 0;
					matrix.pixels[alt][larg].g = 0;
					matrix.pixels[alt][larg].b = 0;
				}
			}
		}
	}
	else if (b < 179)
	{
		for (int alt = 0; alt <= 2; alt++)
		{
			for (int larg = 0; larg <= 2; larg++)
			{
				if (larg == 2 && alt == 0)
				{
					matrix.pixels[alt][larg].r = 0;
					matrix.pixels[alt][larg].g = 0;
					matrix.pixels[alt][larg].b = 255;
				}
				else if (larg == 2 && alt == 1)
				{
					matrix.pixels[alt][larg].r = 0;
					matrix.pixels[alt][larg].g = 0;
					matrix.pixels[alt][larg].b = 0;
				}
				else if (larg == 2 && alt == 2)
				{
					matrix.pixels[alt][larg].r = 0;
					matrix.pixels[alt][larg].g = 0;
					matrix.pixels[alt][larg].b = 255;
				}
			}
		}
	}
	else if (b <= 255)
	{
		for (int alt = 0; alt <= 2; alt++)
		{
			for (int larg = 0; larg <= 2; larg++)
			{
				if (larg == 2)
				{
					matrix.pixels[alt][larg].r = 0;
					matrix.pixels[alt][larg].g = 0;
					matrix.pixels[alt][larg].b = 255;
				}
			}
		}
	}
	return matrix;
}

int main(void)
{
	struct image_s data;
	struct image_s *image = &data;
	struct image_s data2;
	struct image_s *zoomImage = &data2;
	struct pixel_s pixelTarget;
	int i, j, f, lena;
	int newHeight;
	int newWidth;

	lena = read_ppm("lena.ppm", image);
	newHeight = (image->height) * 3;
	newWidth = (image->width) * 3;

	f = new_ppm(zoomImage, newWidth, newHeight);

	if (f == 0)
	{
		for (j = 0; j < image->height; j++)
		{
			for (i = 0; i < image->width; i++)
			{
				pixelTarget = image->pix[j * image->width + i];
				struct subpixel_s subTeste = createMatrix(pixelTarget);
				int newY = j * 3;
				int newX = i * 3;

				for (int alt = 0; alt <= 2; alt++)
				{
					for (int larg = 0; larg <= 2; larg++)
					{
						zoomImage->pix[(newY + alt) * zoomImage->width + (newX + larg)] = subTeste.pixels[alt][larg];
					}
				}
			}
		}
	}

	write_ppm("lena_zoom.ppm", zoomImage);
	free_ppm(image);
	free_ppm(zoomImage);

	return 0;
}