#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

using namespace std;

void Menu1();
void Menu2();
void Menu3();
void Menu4();
int main();

void Uno()
{
    int i;
    float array[4]={32.583,11.239,45.781,22.237};
    float *P_array=&array[0];
    for(i=1;i<5;i++)
    {
        printf("POSICION %i = (%.2f)\n",i,*(P_array+i));
        printf("POSICION EN MEMORIA = %d\n\n",(P_array));
    }
    free(P_array);
    printf("MENU.\n");
    getch();
    system("cls");
    Menu1();
}

void Uno_2()
{
    int i,num1,num2,resultado;
    printf("SUMINISTRE DOS DATOS PARA CREAR LA MATRIZ\n");
    printf("NUMEROS: ");
    scanf("%i",&num1);
    scanf("%i",&num2);
    resultado=num1*num2;
    int matriz[resultado];
    int *P_matriz=&matriz[0];
    for(i=0;i<resultado;i++)
    {
        *(P_matriz+i)= 1 + rand()%((99+1)-1);
        printf("POSICION [%i]= %i\n",i+1,*(P_matriz+i));
        printf("POSICION EN MEMORIA = %d\n\n\n\n\n",(P_matriz+i));
    }
    free(P_matriz);
    printf("\n\nVOLVER AL MENU.");
    getch();
    system("cls");
    Menu1();
}

void Uno_3()
{
    int arreglo[4][4],i,j;
    int *P_arreglo=&arreglo[0][0];
    printf("SUMINISTRE LOS CUATRO NUMEROS\n");
    for(i=0;i<4;i++)
    {
            scanf("%i",&*(P_arreglo+i+0));
            (P_arreglo+i+1*4)=pow((P_arreglo+i+0),2);
            (P_arreglo+i+2*4)=pow((P_arreglo+i+0),3);
            (P_arreglo+i+3*4)=pow((P_arreglo+i+0),4);

    }
    printf("\n\t MOSTRAR VALORES \n\n");
    for(i=0;i<4;i++)
    {
            printf("\t%i",*(P_arreglo+i+0));
            printf("\t%i",*(P_arreglo+i+1*4));
            printf("\t%i",*(P_arreglo+i+2*4));
            printf("\t%i",*(P_arreglo+i+3*4));
            printf("\n");
    }

    free(P_arreglo);
    printf("\n\nVOLVER AL MENU.");
    getch();
    system("cls");
    Menu1();

}

void Dos_1()
{
    int i,j,m[3][3];
    int matriz[3][3];
    int *P_matriz=&matriz[0][0];
    int *P_m=&m[0][0];
    printf("SUMINISTRE LOS DATOS DE LA MATRIZ:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%i",&*(P_matriz+i+j));
        }
    }
    system("cls");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("POSICION [%i][%i] = %i\n",i,j,*(P_matriz+i+j));
            printf("POSICION EN MEMORIA = %i\n",(P_matriz));
        }
    }
    printf("\n\tSUMATORIA\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            (P_m+i+j)=((P_matriz+i+j)+(*(P_matriz+i+j)));
            printf("%i\t",*(P_m+i+j));
        }
        printf("\n");
    }
    free(P_matriz);
    getch();
    system("cls");
    printf("POSOCION EN MEMORIA:\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("POSICION[%i][%i]= %i\t",i,j,(P_m+i+j));
        }
    }
    free(P_m);
    printf("\n\nVOLVER AL MENU.");
    getch();
    system("cls");
    Menu2();

}

void Dos_2()
{
    int i,j;
    int matriz[3][3];
    int *P_matriz=&matriz[0][0];
    printf("\t\tMATRIZ AUTOMATICA\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            *(P_matriz+i+j)= 1 + rand()%((99+1)-1);
            printf("\t%i\t",*(P_matriz+i+j));
        }
        printf("\n");
    }
    fflush(stdin);
    printf("\n\nVOLVER AL MENU.");
    getch();
    system("cls");
    Menu2();
}

void Dos_3()
{
    int i,j,z,a,n;
    int matriz[3][3];
    int *P_matriz=&matriz[0][0];
    printf("\t MATRIZ CON NUMEROS PRIMOS\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a=0;
            n= 1+rand()%((99+1)-1);
            for(z=1;z<=n;z++)
            {
                if(n%z==0)
                {
                    a++;
                }
            }
            if(a==2)
            {
                *(P_matriz+i+j)=n;
                printf("%i\t",*(P_matriz+i+j));
            }else
            {
                j--;
            }

        }
    }
    free(P_matriz);
    printf("\n\nVOLVER AL MENU.");
    getch();
    system("cls");
    Menu2();
}


void Tres_1()
{
    int i,n;
    printf("SUMINISTRE LA DIMENSION DEL VECTOR\n");
    printf("DIMENSION: ");
    scanf("%i",&n);
    int vector[n];
    int *P_vector=&vector[0];
    for(i=0;i<n;i++)
    {
        *(P_vector+i)= 1 +rand()%((100+1)-1);
        if(*(P_vector+i)%2==0)
        {
            printf("NUMERO: %i\n",*(P_vector+i));
            printf("POSICION EN MEMORIA: %d\n",(P_vector+i));
            printf("EL NUMERO ES PAR\n\n");
        }else
        {
            printf("NUMERO: %i \n",*(P_vector+i));
            printf("POSICION EN MEMORIA: %d\n",(P_vector+i));
            printf("El NUMERO ES IMPAR\n\n");
        }
    }
    free(P_vector);
    printf("\n\nVOLVER AL MENU.");
    getch();
    system("cls");
    Menu3();
}

void Tres_2()
{
    int i,z,n,a;
    printf("INGRESE LA DIMENSION DEL VECTOR\n");
    printf("DIMENSION: ");
    scanf("%i",&n);
    int vector[n];
    int *P_vector=&vector[0];
    printf("NUMEROS PRIMOS\n\n");
    for(i=0;i<n;i++)
    {
        a=0;
        *(P_vector+i)= 1 + rand()%((99+1)-1);
        for(z=0;z<=*(P_vector+i);z++)
        {
            if(*(P_vector+i)%z==0)
            {
                a++;
            }
        }
        if(a==2)
        {
            printf("NUMERO = %i\n",*(P_vector+i));
            printf("POSICION EN MEMORIA= %i\n",(P_vector+i));
            printf("El NUMERO ES PRIMO\n\n");
        }
        else
        {
            printf("NUMERO: %i\n",*(P_vector+i));
            printf("NO ES PRIMO\n\n");
        }
    }
    free(P_vector);
    printf("\n\nVOLVER AL MENU.");
    getch();
    system("cls");
    Menu3();
}

void Tres_3()
{
    int i,n;
    int array[10];
    int *P_array=&array[0];
    for(i=0;i<10;i++)
    {
        n=1+rand()%((100+1)-1);
        if(n%2==0)
        {
            *(P_array+i)=n;
            printf("POSICION [%i]= %i\n",i+1,*(P_array+i));
            printf("POSICION EN MEMORIA= %d\n\n",(P_array+i));
        }else
        {
            i--;
        }
    }
    free(P_array);
    printf("\n\nVOLVER AL MENU.");
    getch();
    system("cls");
    Menu3();
}

void Tres_4()
{
    int tam;
	printf("INGRESE LA DIMENSION DEL VECTOR\n");
	scanf("%i",&tam);
	int vec[tam],i,menor,ciclo=0;
	int *p_vec=&vec[0];
	for (i = 0; i < tam; i++) {
		(p_vec + i (tam)) = rand () % 31;
	}
	for(i=0;i<tam;i++){
		if (menor>=*(p_vec+i * tam)) {
				menor = *(p_vec+i * tam);
				ciclo = i;
		}
	}
	fflush(stdin);
	printf("\n\n");
	for(i=0;i<tam;i++){
		printf("\tEl VECTOR: %i  EN POSICION: %i\n",(p_vec + i (tam)),i+1);
	}
	printf("\n\n");
	printf("EL NUMERO MENOR: %i EN POSICION: %i EN MEMORIA: %p",(p_vec+ciclo (tam)),ciclo+1,(p_vec+ciclo));
    free(p_vec);
    getch();
    system("cls");
    Menu3();
}

void Tres_5()
{
    int n,i,j,aux;
    int array[0];
    int *array_dinamica=NULL;
    printf("SUMINISTRE EL TAMAÑO DEL ARREGLO: ");
    scanf("%i",&n);
    array_dinamica= new int[n];
    for(i=0;i<n;i++)
    {
        printf("INGRESE EL %i NUMERO: ",i+1);
        scanf("%i",&*(array_dinamica+i));
    }
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		 if ((array_dinamica+j)<(array_dinamica+j+1))
		 {
		 	aux=*(array_dinamica+j+1);
		 	(array_dinamica+j+1)=(array_dinamica+j);
		 	*(array_dinamica+j)=aux;

		 }
		}
	}
	for (i=0;i<n;i++)
	{
		printf ("%d\t",*(array_dinamica+i));
	}
	delete(array_dinamica);
	printf("\n\nVOLVER AL MENU.");
	getch();
	system("cls");
	Menu3();

}

void Tres_6()
{
    int i,j,n,n1;
    printf("INGRESE LA DIMENSION DEL VECTOR: ");
    scanf("%i",&n);
    int array[n];
    int *array_dinamico=new int[n];
    for(i=0;i<n;i++)
    {
        printf("INGRESE EL %i NUMERO: ",i+1);
        scanf("%i",&*(array_dinamico+i));
    }
    printf("\n\nQUE NUMERO DESEA BUSCAR: ");
    scanf("%i",&n1);
    printf("\n\n");
    for(i=0;i<n;i++)
    {
        if(*(array_dinamico+i)==n1)
        {
            printf("El NUMERO %i SE ENCUENTRA EN LA POSICION: %i\n",*(array_dinamico+i),i+1);
            printf("SU POSICION EN MEMORIA: %d\n\n",(array_dinamico+i));
        }
    }
    delete(array_dinamico);
    printf("\n\nVOLVER AL MENU.");
    getch();
    system("cls");
    Menu3();

}

void Tres_7()
{
    char nombre[30];
    int  cont=0;
    char *P_nombre= nombre;
    printf("SUMINISTRE SU NOMBRE: ");
    scanf("%s",&nombre);
    strupr(nombre);
    while(*P_nombre)
    {
        switch(*P_nombre)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': cont=cont+1;
        }
        P_nombre+=1;
    }
    printf("\nEL NUMERO DE VOCALES ES: %d\n\n",cont);
    free(P_nombre);
    printf("\n\nVOLVER AL MENU.");
    getch();
    system("cls");
    Menu3();
}

void Tres_8()
{
    char nombre[30];
    int cont=0;
    char *P_nombre=nombre;
    printf("INGRESE SU NOMBRE: ");
    scanf("%s",&nombre);
    strupr(nombre);
    while(*P_nombre)
    {
        switch(*P_nombre)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': cont+=1;
        }
        P_nombre+=1;
    }
    printf("\nEL NUMERO DE VOCALES ES: %d\n\n",cont);
    printf("\nVOLVER AL MENU.");
    free(P_nombre);
    getch();
    system("cls");
    Menu3();
}

void Tres_9()
{
    int i,j,filas,columnas;
    printf("SUMINISTRE LA CANTIDAD DE FILAS: ");
    scanf("%i",&filas);
    printf("\nSUMINISTRE LA CANTIDAD DE COLUMNAS: ");
    scanf("%i",&columnas);
    int **P_dinamica1;
    int **P_dinamica2;
    int **P_sumatoria;
    P_dinamica1= new int*[filas];
    P_dinamica2= new int*[filas];
    P_sumatoria= new int*[filas];
    printf("\n\n\t\t MATRIZ 1\n\n");
    for(i=0;i<filas;i++)
    {
        P_dinamica1[i]= new int[columnas];
        for(j=0;j<columnas;j++)
        {
            P_dinamica1[i][j]= 1+rand()&((100+1)-1);
            printf("%i\t",P_dinamica1[i][j]);
        }
        printf("\n");
    }
    getch();
    system("cls");
    printf("\t\t MATRIZ 2\n\n");
    for(i=0;i<filas;i++)
    {
        P_dinamica2[i]= new int[columnas];
        for(j=0;j<columnas;j++)
        {
            P_dinamica2[i][j]= 1 + rand()%((100+1)-1);
            printf("%i\t",P_dinamica2[i][j]);
        }
        printf("\n");
    }
    getch();
    system("cls");
    printf("\t SUMATORIA ENTRE LAS MATRICES\n\n");
    for(i=0;i<filas;i++)
    {
        P_sumatoria[i]=new int[columnas];
        for(j=0;j<columnas;j++)
        {
            P_sumatoria[i][j]=1+rand()%((100+1)-1);
            printf("%i\t",P_sumatoria[i][j]);
        }
        printf("\n");
    }
    delete(P_dinamica1);
    delete(P_dinamica2);
    delete(P_sumatoria);
    printf("\n\nVOLVER AL MENU.");
    getch();
    system("cls");
    Menu3();
}

void Tres_10()
{
    int i,j,n,m;
    printf("SUMINISTRE LA DIMENCION DE LA MATRIZn");
    printf("N: ");
    scanf("%i",&n);
    printf("M: ");
    scanf("%i",&m);
    int **P_matriz= new int *[n];
    for(i=0;i<n;i++)
    {
        P_matriz[i]= new int[m];
        for(j=0;j<m;j++)
        {
            P_matriz[i][j]= 1 + rand()%((50+1)-1);
            printf("%i\t",P_matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\tTRANSPUESTA DE LA MATRIZ\n\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%i\t",P_matriz[j][i]);
        }
        printf("\n");
    }
    free(P_matriz);
    printf("\n\nVOLVER AL MENU.");
    getch();
    system("cls");
    Menu3();
}

struct estudiante
{
    char nombre[20];
    int edad;
    float promedio;
}Alumno[3],*P_struct=&Alumno[0];

void Tres_11()
{
    int i,ciclo;
    float mayor=0;
    struct alumno{
    char nombre[30];
    int edad;
    float promedio;
    }*p_alu[3];

    for(i=0;i<3 ;i++){
        p_alu[i]=(struct alumno *) malloc(sizeof(struct alumno));
        printf("INGRESE EL NOMBRE DEL ESTUDIANTE: %i\n",i+1);fflush(stdin);
        printf("NOMBRE:\n");fflush(stdin);
        scanf("%s",&p_alu[i]->nombre);fflush(stdin);
        printf("EDAD:\n");fflush(stdin);
        scanf("%d",&p_alu[i]->edad);fflush(stdin);
        printf("PROMEDIO:\n");fflush(stdin);
        scanf("%f",&p_alu[i]->promedio);fflush(stdin);
    }
    getch();
    system("cls");
    printf("INFORMACION INGRESADA\n");
    for(i=0;i<3;i++){
        printf("\nINFO. DEL ESTUDIANTE: %i\n",i+1);
        printf("\nNOMBRE:  %s ",p_alu[i]->nombre);
        printf("\nEDAD: %d",p_alu[i]->edad);
        printf("\nPROMEDIO: %.2f",p_alu[i]->promedio);
    }
    for(i=0;i<3;i++){
        if (mayor<p_alu[i]->promedio) {
                mayor = p_alu[i]->promedio;
                ciclo = i;
        }
    }
    getch();
    printf("\n\n\n");
    printf("\t\tEl ALUMNO CON EL MEJOR PROMEDIO ES: %s CON: %.2f EDAD: %d\n",p_alu[ciclo]->nombre,mayor,p_alu[ciclo]->edad);
    free(P_struct);
    printf("\n\nVOLVER AL MENU.");
    getch();
    system("cls");
    Menu3();

}

struct ciclismo
{
    int horas;
    int minutos;
    int segundos;
}*P_structs[0];

void Tres_12()
{
    int i,thoras=0,tminutos=0,tsegundos=0;
    printf("SUMINISTRE EL TIEMPO DE LAS TRES ETAPAS DEL CIRCUITO\n");
    for(i=0;i<3;i++)
    {
        P_structs[i]=(struct ciclismo*)malloc(sizeof(struct ciclismo));
        fflush(stdin);
        printf("\n\t\t %i ETAPA\n",i+1);
        printf("HORAS: ");
        scanf("%i",&P_structs[i]->horas);
        thoras=thoras+P_structs[i]->horas;
        fflush(stdin);
        printf("MINUTOS: ");
        scanf("%i",&P_structs[i]->minutos);
        if(60<P_structs[i]->minutos)
        {
            printf("\n\nERROR, LA INFORMACION EN INCORRECTA.\n");
            i=i-1;
        }
        else
        {
            tminutos=tminutos+P_structs[i]->segundos;
            fflush(stdin);
            printf("SEGUNDOS: ");
            scanf("%i",&P_structs[i]->segundos);
            fflush(stdin);
            if(60<P_structs[i]->segundos)
            {
                printf("ERROR, ES INCORRECTO.\n");
                i=i-1;
            }
            else
            {
                tsegundos=tsegundos+P_structs[i]->segundos;

                printf("\n\nINFO. ALMACENADA\n");
            }
        }
        getch();
        system("cls");

    }
        printf("MOSTRAR INFORMACION TOTAL\n");
        while(tminutos>=60)
        {
            tminutos=tminutos-60;
            thoras=thoras+1;
        }
        while(tsegundos>=60)
        {
            tsegundos=tsegundos-60;
            tminutos=tminutos+1;
        }
        printf("\nEl TIEMPO TOTAL EMPLEADO\n");
        printf("HORAS: %i\tMINUTOS: %i\tSEGUNDOS: %i\n",thoras,tminutos,tsegundos);
        free(P_structs);
        printf("\n\nVOLVER AL MENU.");
        getch();
        system("cls");
        Menu3();
}

struct Estudiante
{
    char nombre[20];
    int edad;
    char sexo[10];
    char club[10];
    char categoria[20];


}*P_Estudiante[0];

void Cuatro_1()
{
    int i,n;
    printf("SUMINISTRE LA CANTIDAD DE CICLISTAS: ");
    scanf("%i",&n);
    printf("SUMINISTRE LOS DATOS DEL COMPETIDOR\n");
    for(i=0;i<n;i++)
    {
        P_Estudiante[i]=(struct Estudiante*)malloc(sizeof(struct Estudiante));
        printf("NOMBRE: ");
        scanf("%s",&P_Estudiante[i]->nombre);
        fflush(stdin);
        printf("EDAD: ");
        scanf("%i",&P_Estudiante[i]->edad);
        fflush(stdin);
        printf("SEXO: ");
        scanf("%s",&P_Estudiante[i]->sexo);
        fflush(stdin);
        printf("CLUB: ");
        scanf("%s",&P_Estudiante[i]->club);
        fflush(stdin);
        if(15>=P_Estudiante[i]->edad)
        {
            strcpy(P_Estudiante[i]->categoria,("INFANTIL"));
        }else if(30>=P_Estudiante[i]->edad)
        {
            strcpy(P_Estudiante[i]->categoria,("JUVENIL"));
        }else
        {
            strcpy(P_Estudiante[i]->categoria,("MAYOR"));
        }
        fflush(stdin);
        printf("\n\nINFORMACION ALMACENADA.");
        getch();
        system("cls");
    }
    printf("MOSTRAR INFORMACION\n\n");
    for(i=0;i<n;i++)
    {
        printf("NOMBRE: %s\n",P_Estudiante[i]->nombre);
        printf("EDAD: %i\n",P_Estudiante[i]->edad);
        printf("SEXO: %s\n",P_Estudiante[i]->sexo);
        printf("CLUB: %s\n",P_Estudiante[i]->club);
        printf("CATEGORIA: %s\n",P_Estudiante[i]->categoria);
        printf("\n\n");
        printf("PRESIONA UNA TECLA PARA CONTINUAR.");
        getch();
        if(i<n-1);
        {
        system("cls");
        }
    }
    free(P_Estudiante);
    printf("\n\nVOLVER AL MENU.");
    getch();
    system("cls");
    Menu4();

}

struct Estudiante1
{
    char nombre[20];
    int edad;
    int grado;
    float promedio;
}*P_estudiante1[0];

void Cuatro_2()
{
    int i,mayor=0,vuelta;
    printf("SUMINISTRE LOS DATOS PARA CADA ESTUDIANTE\n\n");
    for(i=0;i<3;i++)
    {
        P_estudiante1[i]=(struct Estudiante1*)malloc(sizeof(struct Estudiante1));
        fflush(stdin);
        printf("NOMBRE: ");
        scanf("%s",&P_estudiante1[i]->nombre);
        fflush(stdin);
        printf("EDAD: ");
        scanf("%i",&P_estudiante1[i]->edad);
        fflush(stdin);
        printf("GRADO, SUMINISTRE EL NUMERO(Ej: 1,2...): ");
        scanf("%i",&P_estudiante1[i]->grado);
        fflush(stdin);
        printf("PROMEDIO: ");
        scanf("%f",&P_estudiante1[i]->promedio);
        fflush(stdin);
        if(P_estudiante1[i]->promedio>mayor)
        {
                mayor=P_estudiante1[i]->promedio;
                vuelta=i;
        }
        printf("\n\nINFORMACION ALMACENADA.");
        getch();
        system("cls");

    }
    printf("ESTUDIANTE CON MAYOR PROMEDIO\n");
    while(vuelta <3){
             fflush( stdin );
             printf("\n\t EL NOMBRE DEL ESTUDIANTE # %i ES: %s\n",vuelta+1,P_estudiante1[vuelta]->nombre);
             printf("\nSU EDAD: %d\n",P_estudiante1[vuelta]->edad);
             printf("\nSU GRADO: %d\n",P_estudiante1[vuelta]->grado);
             printf("\nSU PROMEDIO: %.2f\n",P_estudiante1[vuelta]->promedio);
             vuelta++;
    }
    free(P_estudiante1);
    printf("\n\nVOLVER AL MENU.");
    getch();
    system("cls");
    Menu4();
}

struct trabajador
{
    float salario;
}*P_trabajador[0];

void Cuatro_3()
{
    int i,n,j;
    int mayor=0,menor=50000000000000000,vuelta_1,vuelta_2;
    printf("SUMINISTRE EL NUMERO DE TRABAJADORES: ");
    scanf("%i",&n);
    j=n;
    printf("SUMINISTRE EL SALARIO DE CADA TRABAJADOR: ");
    for(i=0;i<n;i++)
    {
        P_trabajador[i]=(struct trabajador*)malloc(sizeof(struct trabajador));
        printf("SUMINISTRE EL SALARIO DEL %i TRABAJADOR: ",i+1);
        scanf("%f",&P_trabajador[i]->salario);
        if(P_trabajador[i]->salario>mayor)
        {
            mayor=P_trabajador[i]->salario;
            vuelta_1=i;
        }
         if(P_trabajador[i]->salario<menor)
        {
            menor=P_trabajador[i]->salario;
            vuelta_2=i;
        }
        printf("\n");
        printf("INFORMACION ALMACENADA.");
        getch();
        system("cls");
        fflush(stdin);
    }
    printf("EMPLEADO CON MAS SALARIO\n");
    while(vuelta_1< j)
    {
        fflush(stdin);
        printf("EMPLEADO # %i: %.2f\n\n",vuelta_1+1,P_trabajador[vuelta_1]->salario);
        vuelta_1++;
    }
    getch();
    printf("EMPLEADO CON MENOR SALARIO\n");
    while(vuelta_2< j)
    {
        fflush(stdin);
        printf("EMPLEADO # %i: %.2f\n\n",vuelta_2+1,P_trabajador[vuelta_2]->salario);
        vuelta_2++;
    }
    printf("\n\n VOLVER AL MENU.");
    getch();
    system("cls");
    Menu4();

}


void Menu_1()
{
    int valor;
    printf("----------------------------------------------------\n");
    printf("|                    MENU 1                        |\n");
    printf("|--------------------------------------------------|\n");
    printf("|           1. MOSTRAR LOS ELEMENTOS               |\n");
    printf("|            2. SUMINISTRE DOS VALORES             |\n");
    printf("|               3. DIMENSION 4X4                   |\n");
    printf("|              4. VOLVER AL MENU                   |\n");
    printf("----------------------------------------------------\n");
    printf("\nOPCION: ");
    scanf("%i",&valor);
    system("cls");
    switch(valor)
    {
    case 1:
        Uno();
        break;
    case 2:
        Uno_2();
        break;
    case 3:
        Uno_3();
        break;
    case 4:
        main();
        break;
    default:
        printf("\n\nERROR, PORFAVOR VUELVA A INGRESAR UNA OPCION VALIDA.");
        getch();
        system("cls");
        Menu1();
    }
}

void Menu2()
{
    int valor;
    printf("----------------------------------------------------\n");
    printf("|                     MENU 2                       |\n");
    printf("|--------------------------------------------------|\n");
    printf("|                 1. MATRIZ 3X3                    |\n");
    printf("|         2. MATRIZ 3X3 LLENADO AUTOMATICO         |\n");
    printf("|          3. MATRIZ 3X3 NUMEROS PRIMOS            |\n");
    printf("|               4. VOLVER AL MENU                  |\n");
    printf("----------------------------------------------------\n");
    printf("\nOPCION: ");
    scanf("%i",&valor);
    system("cls");
    switch(valor)
    {
    case 1:
        Dos_1();
        break;
    case 2:
        Dos_2();
        break;
    case 3:
        Dos_3();
        break;
    case 4:
        main();
        break;
    default:
        printf("\n\nERROR, PORFAVOR VUELVA A INGRESAR UNA OPCION VALIDA.");
        getch();
        system("cls");
        main();
    }
}

void Menu3()
{
    int valor;
    printf("----------------------------------------------------\n");
    printf("|                       MENU 3                     |\n");
    printf("|--------------------------------------------------|\n");
    printf("|             1. NUMERO PAR, IMPAR.                |\n");
    printf("|           2. DETERMINAR SI ES PRIMO.             |\n");
    printf("|             3. ARRAY 10 NUMEROS.                 |\n");
    printf("|           4. NUMERO MENOR DEL VECTOR.            |\n");
    printf("|             5. ORDEN ASCENDENTE.                 |\n");
    printf("|              6. BUSCAR NUMERO.                   |\n");
    printf("|         7. MOSTRAR EL NUMERO DE VOCALES.         |\n");
    printf("|            8. CADERNA DE CARACTERES.             |\n");
    printf("|             9. SUMA DE DOS MATRICES.             |\n");
    printf("|              10. MATRIZ TRANSPUESTA.             |\n");
    printf("|              11. ESTRUCTURA ALUMNO.              |\n");
    printf("|         12. TIEMPLO EMPLEADO DE UN CICLISTA.     |\n");
    printf("|                  0. SALIR.                       |\n");
    printf("----------------------------------------------------\n");
    printf("\nOPCION: ");
    scanf("%i",&valor);
    system("cls");
    switch(valor)
    {
    case 1:
        Tres_1();
        break;
    case 2:
        Tres_2();
        break;
    case 3:
        Tres_3();
        break;
    case 4:
        Tres_4();
        break;
    case 5:
        Tres_5();
        break;
    case 6:
        Tres_6();
        break;
    case 7:
        Tres_7();
        break;
    case 8:
        Tres_8();
        break;
    case 9:
        Tres_9();
        break;
    case 10:
        Tres_10();
        break;
    case 11:
        Tres_11();
        break;
    case 12:
        Tres_12();
        break;
    case 0:
        main();
        break;
    default:
        printf("\n\nERROR, PORFAVOR VUELVA A INGRESAR UNA OPCION VALIDA.");
        getch();
        system("cls");
        Menu3();
    }
}

void Menu4()
{
    int valor;
    printf("----------------------------------------------------\n");
    printf("|                        MENU 4                    |\n");
    printf("|--------------------------------------------------|\n");
    printf("|             1. ESTRUCTURA COMPETIDOR.            |\n");
    printf("|             2. ESTRUCTURA ESTUDIANTE.            |\n");
    printf("|        3. ARREGLO ESTRUCTURA TRABAJADORES.       |\n");
    printf("|                 0.VOLVER AL MENU                 |\n");
    printf("----------------------------------------------------\n");
    printf("\nOPCION: ");
    scanf("%i",&valor);
    system("cls");
    switch(valor)
    {
    case 0:
        main();
        break;
    case 1:
        Cuatro_1();
        break;
    case 2:
        Cuatro_2();
        break;
    case 3:
        Cuatro_3();
        break;
    default:
        printf("ERROR, PORFAVOR VOLVER A INGRESAR UNA OPCION VALIDA.");
        getch();
        system("cls");
        Menu4();

    }
}

int main()
{
    int valor;
    printf("\n");
    printf("-----------------------------------------------------\n");
    printf("|                    MENU PRINCIPAL                 |\n");
    printf("|---------------------------------------------------|\n");
    printf("|          1. ARREGLOS CON PUNTEROS.                |\n");
    printf("|          2. MATRICES CON PUNTEROS.                |\n");
    printf("|                3. PUNTEROS.                       |\n");
    printf("|         4. ESTRUCTURA CON PUNTEROS.               |\n");
    printf("|                  0. SALIR                         |\n");
    printf("-----------------------------------------------------\n");
    printf("\nOPCION: ");
    scanf("%i",&valor);
    system("cls");
    switch(valor)
    {
    case 1:
        Menu1();
        break;
    case 2:
        Menu2();
        break;
    case 3:
        Menu3();
        break;
    case 4:
        Menu4();
        break;
    case 0:
        printf("\n\n\tGRACIAS POR USAR ESTE PROGRAMA.");
        getch();
        break;
    default:
        printf("\n\nERROR, PORFAVOR VUELVE A INGRESAR UNA OPCION VALIDA.");
        getch();
        system("cls");
        main();
    }
    return 0;
}
