# montecarlo
Implementação do algoritmo de Montecarlo para integrais em Python e C.

# Explicação
O algoritmo de montecarlo para integral funciona da seguinte forma:
1. escolhe-se uma função e um intervalo (de _a_ a _b_ ) dessa função para analisar;
2. escolhe-se um ponto aleatório entre 0 e o ponto máximo (h) do intervalo analisado;
3. se o ponto estiver entre 0 e h, soma-se 1 a uma váriavel (result);
4. repete-se o processo n vezes;
5. dividi-se result por n para estimar o valor da integral entre _a_ e _b_.