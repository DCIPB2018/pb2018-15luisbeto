#include <stdio.h>
#include <stdlib.h>

int main(int arg, char *argv[]){

        printf("El programa que estas ejecutando es: %s\n", argv[0]);

        char *nombre_archivo;
        FILE *fp;

	float 	Tin, Tfin;
	int num;

        if(arg==5){	
		Tin=atof(argv[1]);
		Tfin=atof(argv[2]);
		num=atoi(argv[3]);
                nombre_archivo=argv[4];
                printf("El nombre del archivo es: %s \t %s \n", argv[4], nombre_archivo);
                fp = fopen(nombre_archivo, "w");
                fprintf(fp, "Tin:%f \t Tfin:%f \t num:%i\n", Tin, Tfin, num);
		fprintf(fp, "i \t C \t \t F\n");
		float delta=(Tfin-Tin)/num;
		float F, C;
		for(int i=0 ; i<num ; i++){
			C=Tin+(delta*i);
			F=((9/5)*C)+32;
			fprintf(fp, "%d\t %f\t %f\n", i, C, F);	
		}
                fclose(fp);
        }
        else if(arg>5){
                printf("Mas argumentos de los necesarios\n");
        }
        else{
                printf("Se requiere de al menos 1 argumento \n");
        }

        return 0;
}
