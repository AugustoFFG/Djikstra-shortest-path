#include <stdlib.h>
#include <stdio.h>

#define MAX 500
#define INF 9999999

int matriz[MAX][MAX];

void dijkstra(int n, int o, int d){
    int i, j;
    int visitas[n+1];
    int distancia[n+1];

    for(i = 0; i <= n; i++){
        visitas[i] = 0;
        distancia[i] = INF;
    }

    distancia[o] = 0;

    for(i = 0; i < n; ++i){
        int v = -1;

        for(j = 1; j <= n; ++j){
            if(visitas[j] == 0 && (v == -1 || distancia[j] < distancia[v])){
                v = j;
            }
        }

        if(distancia[v] == INF) break;
        visitas[v] = 1;

        for(j = 1; j <= n; ++j){
            if(matriz[v][j] != INF && distancia[v] + matriz[v][j] < distancia[j]){
                distancia[j] = distancia[v] + matriz[v][j];
            }
        }
    }

    if(distancia[d] < INF){
        printf("%d\n", distancia[d]);
    }
    else{
        printf("Nao e possivel entregar a carta\n");
    }
}

int main(){
    int n, e, h, k, x, y; 
    scanf("%d %d", &n, &e);

    while (n != 0 || e != 0){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                matriz[i][j] = INF;
            }
        }

        for(int i = 0; i < e; i++){
            scanf("%d %d %d", &x, &y, &h);
            
            if(matriz[y][x] != INF){
                matriz[x][y] = matriz[y][x] = 0;
            }
            else{
                matriz[x][y] = h;
            }
        }
        
        scanf("%d", &k);
        while(k != 0){
            scanf("%d %d", &x, &y);
            dijkstra(n, x, y);
            --k;
        }
        printf("\n");
        scanf("%d %d", &n, &e);
    }
}
