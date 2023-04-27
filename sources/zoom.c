#include <stdio.h>
#include "lib_ppm.h"


// CRIA UMA STRUCT QUE ARMAZENA UMA MATRIX 3X3 DE SUBPIXELS
struct subpixel_s
{
	struct pixel_s pixels[3][3];
};

// FUNCÃO QUE GERA A UM SUBPIXEL A PARTIR DE UM PIXEL
struct subpixel_s createMatrix(struct pixel_s pixel)
{
	struct subpixel_s matrix;
	int r, g, b;
	r = pixel.r;
	g = pixel.g;
	b = pixel.b;
	// printf("R:%d G:%d B:%d\n", r, g, b);


    // APLICA AS REGRAS DO TRABALHO EM CADA POSIÇÃO DA MATRIZ QUE VAI SER GERADA
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





// INÍCIO DA MAIN
int main(void)
{
	struct image_s data;
	struct image_s *image = &data;
	
    // CRIA UM LOCAL PARA ARMAZENAR A NOVA IMAGEM GERADA
    struct image_s data2;
	struct image_s *zoomImage = &data2;
	struct pixel_s pixelTarget;
	int i, j, f, lena;
	int newHeight;
	int newWidth;

	lena = read_ppm("lena.ppm", image);
	
    // GERAMOS A NOVA ALTURA E LARGURA DA IMAGEM COM ZOOM
    newHeight = (image->height) * 3;
	newWidth = (image->width) * 3;

    // CRIA A ESTRUTURA QUE VAI RECEBER A IMAGEM COM ZOOM
	f = new_ppm(zoomImage, newWidth, newHeight);

	if (f == 0)
	{
        // ENTRA EM CADA PIXEL DA IMAGEM PERCORRENDO DA ESQUERDA PARA A DIREITA, DE CIMA PARA BAIXO
		for (j = 0; j < image->height; j++)
		{
			for (i = 0; i < image->width; i++)
			{
				pixelTarget = image->pix[j * image->width + i]; // PEGA O PIXEL DE REFERENCIA
				struct subpixel_s subTeste = createMatrix(pixelTarget); // GERA A MATRIZ
				// GERA A POSIÇÃO ONDE CADA NOVO PIXEL GERADO NA MATRIZ VAI SER COLOCADA NA IMAGEM COM ZOOM
                int newY = j * 3;
				int newX = i * 3;

                // PERCORRE A MATRIZ DE 3X3
				for (int alt = 0; alt <= 2; alt++)
				{
					for (int larg = 0; larg <= 2; larg++)
					{
                        // COLA NA IMAGEM CADA PIXEL DA MATRIZ GERADA
						zoomImage->pix[(newY + alt) * zoomImage->width + (newX + larg)] = subTeste.pixels[alt][larg];
					}
				}
			}
		}
	}

	write_ppm("lena_zoom.ppm", zoomImage);
	free_ppm(image);
	free_ppm(zoomImage);
    printf("FIM!");
	return 0;
}