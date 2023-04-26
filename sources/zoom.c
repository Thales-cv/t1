#include <stdio.h>
#include "lib_ppm.h"

int main(void)
{
	struct image_s data;
	struct image_s *image = &data;
	// ========
	struct image_s data2;
	struct image_s *zoomImage = &data2;
	
	struct pixel_s pixelTarget;
	
	int i, j, r, b, g, f, lena;
	
	int newHeight;
	int newWidth;

	// =====

	struct subpixel_s {
    	struct pixel_s pixels[3][3];
	};

	/*
		funcao criaSubPixel(pixel){
			bytes r,g,b
			


			return matriz[3][3];
		}
	*/


	lena = read_ppm("lena.ppm", image);
	newHeight = (image->height) * 3;
	newWidth = (image->width) * 3;
	
	f = new_ppm(zoomImage,newWidth,newHeight);


	struct subpixel_s teste(struct pixel_s pixel){
		struct subpixel_s matrix;

		int r, g, b;
		r = pixel.r;
		g = pixel.g;
		b = pixel.b;
		printf("R:%d G:%d B:%d",r,g,b);
    	
		for(int larg = 0; alt <=2 ; 0++){
			for(int alt = 0; larg <=2; 0++){
				if(larg == 0){
					matrix[alt][larg].r = r;
					matrix[alt][larg].g = 0;
					matrix[alt][larg].b = 0;
				}
				if(larg == 1){
					matrix[alt][larg].r = 0;
					matrix[alt][larg].g = g;
					matrix[alt][larg].b = 0; 
				}
				if(larg == 2){
					matrix[alt][larg].r = 0;
					matrix[alt][larg].g = 0;
					matrix[alt][larg].b = b; 
				}
			}
		}
		
		return matrix;
	}



	if(f == 0){
		for (j = 0; j < image->height; j++) {
			for (i = 0; i < image->width; i++) {
				
				/*
				pixelTarget =  image->pix[j * image->width + i];
				printf("Pixel Position [%d][%d] -> R:%d G: %d B:%d \n",j,i,
				pixelTarget.r,
				pixelTarget.g,
				pixelTarget.b);
				*/

				pixelTarget = image->pix[j * image->width + i];
				struct subpixel_s subTeste = teste(pixelTarget);
				int newY = j*3;
				int newX = i*3;
				
				for(){
				zoomImage->pix[100 * image->width + x] = matrix;
				zoomImage->pix[100 * image->width + x].g = 0;
				zoomImage->pix[100 * image->width + x].b = 0;
				[a,b]
				}
			}
		}
	}

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
