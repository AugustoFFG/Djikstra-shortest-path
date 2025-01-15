# Algoritmo de Dijkstra em C

Este repositório contém uma implementação do algoritmo de Dijkstra para encontrar o caminho mais curto entre duas cidades em um grafo ponderado, representado por uma matriz de adjacência. O algoritmo é utilizado para resolver problemas de entrega de cartas entre cidades, conforme especificado na descrição do problema.

## Descrição

O código implementa o algoritmo de Dijkstra para encontrar o menor caminho entre duas cidades em um grafo, onde:

- **N**: número de cidades (nós).
- **E**: número de rotas (arestas) entre as cidades.
- **K**: número de consultas para encontrar o caminho mais curto entre duas cidades.
- **X e Y**: cidades de origem e destino das rotas.
- **H**: peso da aresta, que representa o tempo de entrega ou distância entre as cidades.

O algoritmo lê os dados de entrada, calcula o menor caminho entre as cidades para cada consulta e exibe o resultado. Se não for possível encontrar um caminho, o programa retorna a mensagem "Nao e possivel entregar a carta".

## Estrutura do Código

- **Função `dijkstra(int n, int o, int d)`**: Implementação do algoritmo de Dijkstra. Recebe o número de cidades `n`, a cidade de origem `o` e a cidade de destino `d`, e calcula a menor distância entre elas.
  
- **Matriz de adjacência `matriz[MAX][MAX]`**: Representa o grafo com as distâncias entre as cidades. O valor `INF` (um valor grande, definido como `9999999`) é utilizado para representar que não há conexão direta entre as cidades.

- **Entrada e saída**: O programa lê os dados de entrada, que consistem em múltiplos casos de teste. Para cada caso, o programa lê o número de cidades, rotas e consultas e imprime o resultado para cada consulta.

## Como Funciona

1. **Entrada de Dados**:
   O programa começa lendo o número de cidades e o número de rotas (arestas). Em seguida, ele lê cada rota, que inclui a cidade de origem, cidade de destino e o peso da rota (tempo de entrega ou distância).
   N E
  X Y H
  ...
  K
  O D
  ...
  0 0


3. **Processamento de Consultas**:
   Após as rotas serem lidas, o programa aceita um número de consultas, onde para cada consulta, ele encontra o caminho mais curto entre as cidades especificadas, utilizando o algoritmo de Dijkstra.

4. **Saída**:
   Para cada consulta, o programa imprime o valor da menor distância entre as cidades de origem e destino. Se não houver um caminho disponível, a mensagem `"Nao e possivel entregar a carta"` é impressa.

