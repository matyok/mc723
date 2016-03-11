#Relatório exercício 1

##Tempo primo.c

Os tempos de execucão dos arquivos

Flag   | Teste 1 (ms) | Teste 2 (ms) | Média (ms)
------ | :------------: | :-------------: | :------------:
-  | 332 | 321 | 327
O0 | 412 | 392 | 402
O1 | 316 | 325 | 320
O2 | 295 | 301 | 298
O3 | 290 | 298 | 294

A otimizacão O3 deu o melhor tempo.

A flag mtune otimiza o código de acordo com o parâmetro passado, este parâmetro corresponde à uma otimizacão relacionada ao funcionamento do processador.

Flag   | Teste 1 (ms) | Teste 2 (ms) | Média (ms)
------ | :------------: | :-------------: | :------------:
mtune | 301 | 308 | 304

A flag mtune não melhorou o tempo de execucão.

##Tempo primo.c em arquivos separados

A funcão de checar primo sendo compilada em outro arquivo, com flag O3 e mtune, obteve os seguintes tempos.

Flag   | Teste 1 (ms) | Teste 2 (ms) | Média (ms)
------ | :------------: | :-------------: | :------------:
O3 mtune | 311 | 298 | 304

O progrma rodou com o mesmo tempo do mtune, porém um tempo um pouco maior que a funcão junta.

##Calculando primos de 1 a n

Modificando o programa para achar os primos de 1 a n, temos o seguinte tempo.

N   | Teste 1 (ms) | Teste 2 (ms) | Média (ms)
------ | :------------: | :-------------: | :------------:
100000  | 1245 | 1329 | 1287

#####Utilizando apenas ímpares

N   | Teste 1 (ms) | Teste 2 (ms) | Média (ms)
------ | :------------: | :-------------: | :------------:
100000  | 938 | 873 | 955

#####GPROF

Com N = 100000, a funcão que calcula os primos corresponde por praticamente todo o trabalho do programa.

#####Otimizacões

O que podemos utilizar para melhorar o programa:
* Aproveitar-se da arquitetura do computador, elementos como cache, melhorando como os dados são carregados.
* Encontrar um algoritimo mais eficiente para achar prováveis primos, antes de testá-los.
* Estimar o n-esimo primo antes de comecar o algoritimo.
* Otimizar rotinas matemáticas como divisão e multiplicaćão, se utilizando de shifts e similares.


