#include<iostream>
#include<random>
#include <ctime>

void PedirMatriz (int matriz[100][100],int n) 
{
int i, j;
std::cout<<"Introduzca su matriz\n";
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
       std::cin>>matriz[i][j];
    }

}

}

void SacarMatriz(int matriz[100][100],int n)
{
        int i, j;
        for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           std::cout<<matriz[i][j]<<"\t";
        }
           std::cout<<std::endl;
    }
     std::cout<<std::endl;
}

void RandomMatriz(int M[100][100],int n){
    for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
       matriz[i][j]=std::rand() % (201) - 100;;
    }

}
}

void MatrizIdentidad(int Identidad[100][100],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
        if (i==j)
        {
            Identidad[i][j]=1;
        }else{
            Identidad[i][j]=0; 
        }
        
        }
    }

}

void SumaMatriz(int M1[100][100],int M2[100][100],int R[100][100],int n)
{
    int i, j;
    for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
       R[i][j]=M1[i][j]+M2[i][j];
    }

}

void Mult1Matriz(int M1[100][100],int R[100][100],int n)
{
    int i, j,c;
    std::cout<<"Eliga por cuanto la va multiplicar"<<std::endl;
    std::cin>>c;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           R[i][j]=M1[i][j]*c
        }

    }
}
      
}

void RestaMatriz(int M1[100][100],int M2[100][100],int R[100][100],int n)
{
    int i, j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           R[i][j]=M1[i][j]-M2[i][j];
        }

    }
}

void MultMatriz(int M1[100][100],int M2[100][100],int Resultado[100][100],int n) {
    int i, j,i1,j1;
    
    
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
             Resultado[i][j]=0;
                for(j1=0; j1<n; j1++) {
                  Resultado[i][j] = Resultado[i][j] + M1[i][j1]*M2[j1][i];     
                }
                     
            }
    }
}




int main () 
{
int matriz1[100][100],matriz2[100][100],Resultado[100][100],Identidad[100][100],op,n,op2;

    std::cout<<"Tamaño de la matriz n*n, n="<<std::endl;
    std::cin>>n;

    PedirMatriz(matriz1,n);

    PedirMatriz(matriz2,n);

    do{
    MatrizIdentidad(Identidad,n);

    SacarMatriz(matriz1,n);

    SacarMatriz(matriz2,n);
    
    std::cout<<"Eliga la operacion de matrizes \n\t1) Suma\n\t2) Resta\n\t3) Multiplicacion\n\t4) Multiplia A por otro numero \n\t5) Multiplia B por otro numero \n\t6) Cambia A \n\t7) Cambia B \n\t8) Cambiar todo \n\t9) Feeling Lucky\n\t0) Salir";
    std::cin>>op;
    if(op==1){
         std::cout<<"Que quieres Sumar que:\n\t1)A+B\n\t2)A+Identidad\n\t3)B+Identidad\n"
        std::cin>>op2;
        if (op2==1) {
            SumaMatriz(matriz1, matriz2, Resultado,n);
            }
            if (op2==3){
            SumaMatriz(matriz1, Identidad, Resultado,n);
            }
            if (op2==5) {
            SumaMatriz(matriz2, Identidad, Resultado,n);
            }
        SacarMatriz(Resultado,n);
    }
    if(op==2){
        std::cout<<"Que quieres Restar que:\n\t1)A-B\n\t2)B-A\n\t3)A-Identidad\n\t4)Identidad-A\n\t5)B-Identidad\n\t6)Identidad-B\n"
        std::cin>>op2;
        if (op2==1) {
            RestaMatriz(matriz1, matriz2, Resultado,n);
            }
            if (op2==2) {
            RestaMatriz(matriz2,matriz1, Resultado,n);
            }
            if (op2==3){
            RestaMatriz(matriz1, Identidad, Resultado,n);
            }
            if (op2==4) {
            RestaMatriz(Identidad, matriz1, Resultado,n);
            }
            if (op2==5) {
            RestaMatriz(matriz2, Identidad, Resultado,n);
            }
            if (op2==6){
            RestaMatriz(Identidad, matriz2, Resultado,n);
            }
        SacarMatriz(Resultado,n);
    }
    if(op==3){
        std::cout<<"Que quieres Multiplicar:\n\t1)A*B\n\t2)B*A\n\t3)A*Identidad\n\t4)Identidad*A\n\t5)B*Identidad\n\t6)Identidad*B\n"
        std::cin>>op2;
            if (op2==1) {
            MultMatriz(matriz1, matriz2, Resultado,n);
            }
            if (op2==2) {
            MultMatriz(matriz2,matriz1, Resultado,n);
            }
            if (op2==3){
            MultMatriz(matriz1, Identidad, Resultado,n);
            }
            if (op2==4) {
            MultMatriz(Identidad, matriz1, Resultado,n);
            }
            if (op2==5) {
            MultMatriz(matriz2, Identidad, Resultado,n);
            }
            if (op2==6){
            MultMatriz(Identidad, matriz2, Resultado,n);
            }
            
        SacarMatriz(Resultado,n);
    }
     if(op==4){
        Mult1Matriz(matriz1,Resultado,n);
        SacarMatriz(Resultado,n);
    }
    if(op==5){
        Mult1Matriz(matriz2,Resultado,n);
        SacarMatriz(Resultado,n);
    }
    if(op==6){
        PedirMatriz(matriz1,n);
        
    }
     if(op==7){
        PedirMatriz(matriz2,n);
        
    }
    if(op==8){
        std::cout<<"Tamaño de la matriz n*n, n="<<std::endl;
        std::cin>>n;
        PedirMatriz(matriz1,n);

        PedirMatriz(matriz2,n);
    if(op==9){
        srand(time(0));
        n=std::rand() % (101);
        RandomMatriz(matriz1,n);
        RandomMatriz(matriz2,n);
    }
    


    }while(op=!0);
    
    
}

