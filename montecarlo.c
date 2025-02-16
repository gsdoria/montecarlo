#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// função a ser integrada
float normal(float x){
    return x;
}

// checar se Py é menor que f(Px), onde P é o ponto gerado aleatoriamente
int check(float p[2]){
    return p[0] <= p[1];
}

// gerar número aleatório entre A e B
float random_range(float a, float b){
    return a + ( b - a ) * rand() / (float) RAND_MAX;
}

float montecarlo(float n, float a, float b){
    float h = normal((float)b); // máximo da curva no intervalo analisado
    
    float result = 0;
    
    for (int i=0; i<n; i++){
        float p[2] = {random_range(a,b), random_range(0,h)};
        result += check(p);
    }
    
    return result / n;
}

int main() {
    srand(time(NULL));
    
    printf("montecarlo: %f", montecarlo(10000,0,1));

    return 0;
}

