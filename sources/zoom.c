#include <stdio.h>
#include "lib_ppm.h"

int main(void)
{
	struct image_s data;
	struct image_s *image = &data;
	int i, j, r, b, g;
	
	r = read_ppm("lena.ppm", image);
	/*
	if (r == 0) {
		
		printf("width: %d, height: %d\n", image->width, image->height);
		for (j = 0; j < image->height; j++) {
			for (i = 0; i < image->width; i++) {
				printf("(%d %d) %02x %02x %02x\n", i, j,
					image->pix[j * image->width + i].r,
					image->pix[j * image->width + i].g,
					image->pix[j * image->width + i].b);
			}
		}
		
		write_ppm("lena_copy.ppm", image);
		
		free_ppm(image);
	}
	*/
	///// CÓDIGO PRODUZIDO
	
	/*
	if(r == 0){
	for (j = 0; j < image->height; j++) {
			for (i = 0; i < image->width; i++) {
					r = image->pix[j * image->width + i].r;
					g = image->pix[j * image->width + i].g;
					b = image->pix[j * image->width + i].b;
					printf("R: %d G: %d B: %d \n", r, g, b);

			}
		}
	}
	*/

	pixel1
	pixel2
	pixel3
	pixel4

	lista de pixels
	newMatrix(lista de pixel);
	return matrix nova





	r = new_ppm(image, 675, 428);
	
	if (r == 0) {
		for(int x = 0; x < 100;x++){
		image->pix[100 * image->width + x].r = 255;
		image->pix[100 * image->width + x].g = 0;
		image->pix[100 * image->width + x].b = 0;
		}
		write_ppm("test.ppm", image);
		free_ppm(image);
	}
	
	
	return 0;
}
