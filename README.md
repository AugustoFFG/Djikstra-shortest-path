Algoritmo de Dijkstra em C
Este repositório contém uma implementação do algoritmo de Dijkstra para encontrar o caminho mais curto entre duas cidades em um grafo ponderado, representado por uma matriz de adjacência. O algoritmo é utilizado para resolver problemas de entrega de cartas entre cidades, conforme especificado na descrição do problema.

Descrição
O código implementa o algoritmo de Dijkstra para encontrar o menor caminho entre duas cidades em um grafo, onde:

N: número de cidades (nós).
E: número de rotas (arestas) entre as cidades.
K: número de consultas para encontrar o caminho mais curto entre duas cidades.
X e Y: cidades de origem e destino das rotas.
H: peso da aresta, que representa o tempo de entrega ou distância entre as cidades.
O algoritmo lê os dados de entrada, calcula o menor caminho entre as cidades para cada consulta e exibe o resultado. Se não for possível encontrar um caminho, o programa retorna a mensagem "Nao e possivel entregar a carta".

Estrutura do Código
Função dijkstra(int n, int o, int d): Implementação do algoritmo de Dijkstra. Recebe o número de cidades n, a cidade de origem o e a cidade de destino d, e calcula a menor distância entre elas.

Matriz de adjacência matriz[MAX][MAX]: Representa o grafo com as distâncias entre as cidades. O valor INF (um valor grande, definido como 9999999) é utilizado para representar que não há conexão direta entre as cidades.

Entrada e saída: O programa lê os dados de entrada, que consistem em múltiplos casos de teste. Para cada caso, o programa lê o número de cidades, rotas e consultas e imprime o resultado para cada consulta.

Como Funciona
Entrada de Dados: O programa começa lendo o número de cidades e o número de rotas (arestas). Em seguida, ele lê cada rota, que inclui a cidade de origem, cidade de destino e o peso da rota (tempo de entrega ou distância).

Processamento de Consultas: Após as rotas serem lidas, o programa aceita um número de consultas, onde para cada consulta, ele encontra o caminho mais curto entre as cidades especificadas, utilizando o algoritmo de Dijkstra.

Saída: Para cada consulta, o programa imprime o valor da menor distância entre as cidades de origem e destino. Se não houver um caminho disponível, a mensagem "Nao e possivel entregar a carta" é impressa.

Como Rodar
Clone este repositório para o seu computador:

bash
Copiar código
git clone https://github.com/seu-usuario/dijkstra-c.git
Compile o código:

bash
Copiar código
gcc -o dijkstra dijkstra.c
Execute o programa:

bash
Copiar código
./dijkstra
Insira os dados de entrada no formato:

mathematica
Copiar código
N E
X Y H
...
K
O D
...
0 0
Onde:

N e E representam o número de cidades e rotas, respectivamente.
X Y H representa uma rota da cidade X para a cidade Y com um peso H.
K é o número de consultas a serem feitas.
O D são as cidades de origem e destino para cada consulta.
A entrada termina com 0 0.

Exemplo de Entrada:
plaintext
Copiar código
4 5
1 2 5
2 1 10
3 4 8
4 3 7
2 3 6
5
1 2
1 3
1 4
4 3
4 1
3 3
10
1 3
3 1
3 2
0 0
Exemplo de Saída:
plaintext
Copiar código
0
6
6
0
Nao e possivel entregar a carta

10
Nao e possivel entregar a carta
0
Funcionalidades
Algoritmo de Dijkstra para encontrar o caminho mais curto.
Suporta múltiplos casos de teste.
Lida com arestas bidirecionais (caso haja rotas reversas entre duas cidades).
Exibe o tempo mínimo de entrega ou informa quando não é possível entregar a carta.
