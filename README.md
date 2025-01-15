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

## Formato de Entrada

A entrada é composta pelas seguintes linhas:

1. **Primeira linha**: dois inteiros `N` e `E`, representando o número de cidades (vértices) e o número de rotas (arestas) no grafo.

2. **Próximas `E` linhas**: cada linha contém três inteiros `X`, `Y` e `H`, representando uma rota da cidade `X` para a cidade `Y` com peso `H` (tempo de entrega ou distância).

3. **Próxima linha**: um inteiro `K`, representando o número de consultas a serem feitas.

4. **Próximas `K` linhas**: cada linha contém dois inteiros `O` e `D`, representando uma consulta de caminho mais curto entre a cidade `O` (origem) e a cidade `D` (destino).

5. **Última linha**: a linha `0 0` para indicar o final da entrada.

### Exemplo de Entrada:

```plaintext
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
```

3. **Processamento de Consultas**:
   Após as rotas serem lidas, o programa aceita um número de consultas, onde para cada consulta, ele encontra o caminho mais curto entre as cidades especificadas, utilizando o algoritmo de Dijkstra.

4. **Saída**:
   Para cada consulta, o programa imprime o valor da menor distância entre as cidades de origem e destino. Se não houver um caminho disponível, a mensagem `"Nao e possivel entregar a carta"` é impressa.
   ## Exemplo de Saída

A saída consiste em uma linha para cada consulta. Cada linha mostra o menor tempo (peso) necessário para ir da cidade de origem à cidade de destino. Caso não haja caminho possível entre as cidades, a saída será a mensagem "Nao e possivel entregar a carta".

### Exemplo de Saída para o Exemplo de Entrada:

```plaintext
0
6
6
0
Nao e possivel entregar a carta

10
Nao e possivel entregar a carta
0


