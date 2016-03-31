# Trabalho 1 - Parte 3

## Introdução
Para este projeto foram determinados certos _benchmarks_ para medir o desempenho de diversos computadores. Para isso foram determinados critérios de medidas para cada _benchmark_.

Os dados foram organizados em uma tabela, e para simplificação e melhor visualização foram traduzidos para gráficos que são apresentados neste relatório, onde será feita a análise dos dados.

## Computadores
| Nome                  | Descrição do computador                                                                                                                        |
|-----------------------|------------------------------------------------------------------------------------------------------------------------------------------------|
| Mateus Ruivo          | Intel(R) Core(TM) i3-3110M CPU @ 2.40GHz 3072 KB Cache, 4GB RAM DDR3, 5400rpm SATA                                                             |
| Pedro Meireles        | Intel® Core™ i5-4590 CPU @ 3.30GHz × 4;  Memory 8 GiB;  64-bit graph: Intel® Haswell Desktop , Gnome: Version 3.18.2; Disk 216.9 GB; Fedora 23 |
| Klaus Rollman         | Intel(R) Core(TM) i7-3610QM CPU 4 cores, 8 threads @ 2.30GHz @ L1 256 KB / L2 1024 KB / L3 6144 KB                                             |
| yk0 - Yugo Kuno       | AMD PhenonII, 4 cores, 3.2MHz; 10GB, ddr3, 1.333 MHz; hdd sata3, 7200rpm, 32MB buffer                                                          |
| Cygnus X-1            | Intel® Core™ i7 × 4;  Memory 8 GiB;                                                                                                            |
| Luiz Sekijima         | Intel® Core™2 Duo CPU T6500 @ 2.10GHz × 2, 4GB RAM                                                                                             |
| IC-legiao             | Intel® Core™2 Quad CPU Q8400 @ 2.66GHz × 4 Intel® Q45/Q43                                                                                      |
| Renan Gomes           | Intel® Core™ i7-4702MQ CPU @ 2.20GHz × 8 (64 bits) Memory 8 GiB; Graphics Intel® Haswell Mobile ; Ubuntu 14.04                                 |
| Bruno Hori - Mamonas  | Intel(R) Core(TM)2 Quad CPU    Q8400  @ 2.66GHz                                                                                                |
| debios                |  Intel(R) Core(TM) i7-3612QM CPU @ 2.10GHz x 4, 8 threads, 8GB, 64-bit, SSD 32GB, HDD1TB (5400rpm), Debian                                     |
| Gabriel Bueno         | Intel(R) Core(TM) i7-4510U CPU @ 2.00GHz x 2, 4 threads, 64-bit; Memory 8 GB DDR3; HD SATA 5400rpm;Ubuntu  15.10                               |
| Renan Castro          | Intel(R) Core(TM) i7-3740QM CPU @ 2.70GHz @ 2 CORES @ Virtual Machine                                                                          |
| Gabriel Magalhães     | Intel® Core™ i7-3612QM CPU @ 2.10GHz × 8; Memory 8GB, SSD Kingston 240GB V300 Sata III;  Ubuntu 15.04                                          |
| Victor Souza          | Intel(R) Core(TM)2 Quad CPU Q8400  @ 2.66GHz; Memory 4GB, Fedora release 21                                                                    |
| IC301-Titan           | Intel® Core™2 Quad CPU Q8400 @ 2.66GHz × 4 Intel® Q45/Q43, 3.8GB RAM                                                                           |
| João Fidélis          | Intel Core i7-Intel(R) Core(TM) i7-4700HQ CPU @ 2.40GHz x 4, 16GB DDR3, Ubuntu 14.04LTS, HD: WD10S21X-24R1BTO / 7200RPM / Sata III             |
| floyd                 | Intel(R) Core(TM)2 Quad CPU    Q8400  @ 2.66GHz, Memory 4GB                                                                                    |
| Rodrigo Silva         | Intel(R) Core(TM) i5-2450M @ 2.5GHZ; Memory 6GB                                                                                                |
| IC-sepultura          | Intel® Core™2 Quad CPU Q8400 @ 2.66GHz × 4 Intel® Q45/Q43 × 3.8GB RAM                                                                          |
| Pedro Grijó           | Intel(R) Core(TM) i7-2670QM CPU @ 2.20GHz x4, 8GB DDR 1333Mhz ,Ubuntu 14.04LTS 32bits,HDD: SAMSUNG HN-M101MBB / 5400 RPM/ Sata III             |
| Pedro Vasconcellos    | Raspberry Pi, 900MHz quad-core ARM Cortex-A7 CPU, 1GB RAM, 32GB SD Card                                                                        |
| Wendrey               | Intel Core i5-5200U CPU 2.20GHz x 4 L1 32KiB L2 256KiB L3 3MiB Memory 8GiB DDR3 Disk 1TB WDC WD10JPVX-22J Ubuntu 14.04 LTS                     |
| Matheus Figueiredo    | Intel Core i7-4700HQ CPU @ 2.4GHz, 16GB DDR3, Ubuntu 14.04LTS, HDD 5400RPM                                                                     |
| Titouan Thibaud       | Intel® Core™ i5-4590 CPU @ 3.30GHz × 4;  Memory 8 GiB;  64-bit graph: Intel® Haswell Desktop , Gnome: Version 3.18.2; Disk 216.9 GB; Fedora 23 |
| Titouan Thibaud       | Intel Core i7-2630QM CPU @2.00GHz Memory 4GiB Linux Mint                                                                                       |
| Rafael Faria          | Intel(R) Core(TM) i7-4750HQ CPU @ 2.00GHz; Memory 8 GB 1600 MHz DDR3; Mac OS X El Capitan (version 10.11.4)                                    |
| João Paulo            | Intel(R) Core(TM) i7-4510U CPU @ 2.00GHz; Memory 16 GB; Ubuntu 14.04.4                                                                         |
| Matheus Pinheiro      | Intel® Core™ i5-4200U CPU @ 1.60GHz × 4 ; Memory 3,8 GiB; Ubuntu 15.04 64-bit;                                                                 |
| Gustavo Basso         | Intel Core i7 @ 2.3GHz; 8 GB 1600 MHz DDR3                                                                                                     |
| Netbook - Felipe Emos | Intel Atom Processor D4xx/D5xx/N4xx/N5xx DMI Bridge                                                                                            |

## Benchmark 1: Genetic
Este programa utiliza um algoritmo de _"gerações"_ para ir recriando uma imagem. Desta forma, é um programa que consome bastante de CPU e ao mesmo tempo do disco para fazer leitura/escrita de imagem. Desta foram foram analisados o tempo de execução e uso de disco após 50 mil iterações.

### Tempo de execução
![Genetic Tempo](/trabalho1/genetic_tempo.png "Genetic")

Vendo as informações de cada computador e comparando com os tempos encontrados, percebe-se que realmente o programa é extremamente dependente do processador utilizado. O gráfico mostra o maior tempo até o menor, da esquerda para direita.

O maior tempo, máquina do Pedro Vasconcellos, é um Raspberry Pi. Vemos que o poder de processamento do Raspberry Pi é muito mais limitado que o das outras máquinas, com um processador _quad-core ARM @900MHz_. Até mesmo um processador mais antigo, que resultou no segundo pior tempo, _Intel® Core™2 Duo CPU @2.10GHz_ conseguiu manter um tempo próximo aos processadores mais recentes da geração _Intel(R) Core(TM) iX_.

O tempo do Raspberry Pi ficou 5 vezes maior que o segundo pior tempo e 10 vezes com o primeiro, mesmo com um clock operando com um pouco menos da metade da frequência. Isso pode ser resultado do tipo de arquitetura _ARM_ e _Intel_, a tecnologia empregada em cada uma dessas arquiteturas mostram que a arquitetura _Intel_ tem um grande impacto quando processando um programa de processamento intenso(processamento de imagens).

Quanto a outros recursos como memória ou disco, apresentaram pouco impacto. Vemos que máquinas com processadores similares e diferentes quantidades de memória apresentando tempos próximos.

### Uso de disco
![Genetic Disco](/trabalho1/genetic_disco.png "Genetic")

Aqui vemos a performance de _IO_ de cada _HDD_ em cada computador, quanto maior a taxa de transferência, melhor, portanto o gráfico mostra o melhor até o pior da esquerda para direita. Novamente vemos o Raspberry Pi com uma performance menor que os outros computadores, porém entre o segundo pior existe apenas uma diferença de um fator de 2 vezes. Por outro lado, vemos uma diferença de 13 vezes com o primeiro.

Mesmo assim, vemos que o desempenho é mais linear em relação ao _HDD_ usado(ou cartão de memória no caso do Raspberry Pi). Computadores com _HDDs_ de maior performance(RPM mais altos) obtiveram uma taxa de _IO_ maior. Outros menores fatores envolvendo cache do disco, memória, tipo de formatação, capacidade, provavelmente tiveram influência nesses resultados, resultando em taxas diferentes para mesma velocidade de rotação, mas não temos dados suficientes que evidenciem isso.

##Benchmark 2: ffmpeg
Neste _benchmark_ foram gerados os seguintes gráficos.

![ffmpeg time](/trabalho1/ffmpeg_time.png "ffmpeg")

![ffmpeg time](/trabalho1/ffmpeg_stalledcycles.png "ffmpeg")

![ffmpeg time](/trabalho1/ffmpeg_pagefaults.png "ffmpeg")

![ffmpeg time](/trabalho1/ffmpeg_cachemisses.png "ffmpeg")

Fazendo uma leitura dos gráficos, vemos um comportamento interessante. Neste programa de análise de imagem, que se utiliza de otimizações multithreading.

Mesmo com o pior tempo, o computador de Luiz Sekijima, que possui um _Intel® Core™2 Duo CPU T6500_, um processador mais antigo, apresenta a menor quantidade de Page Fault e a terceira menor quantidade de cache misses. Isso pode ser devido a quantidade reduzida de cores ocasiona uma menor troca de cache e memória, porém mesmo com esses melhores resultados, vemos que uma máquina, a de João Fidélis, que possui um dos melhores e mais novos processadores, tem a terceira maior taxa de Page Fault e Cache Miss. Podemos considerar então que o a tecnologia empregada no processador compensa esses fatores.


## Benchmark 3: convolução

![convolucao_tempo](/trabalho1/convolucao_tempo.png "convolucao")

![convolucao_disco](/trabalho1/convolucao__disco.png "convolucao")

Aqui podemos fazer uma análise levando em consideração que o desempenho do processador afeta diretamente o tempo médio de execução do programa.

As máquinas com os sete melhores tempos, possuem processadores similares. Mesmo assim, um comportamento interessante do da máquina debios e do Titouan Thibaud tem processadores similares, com discos similares e tempos de execução bastante diferentes. Algum fator na máquina debios pode ter afetado seu desempenho, seja a memória ou até processos que estivessem rodando em paralelo durante a execução.

Dois outros comportamentos interessantes, são as máquinas de Gustavo Basso e Yugo Kuno, que apresentaram um desempenho de disco menor, mas o tempo de execução foram razoáveis. Provavelmente o desempenho de disco não seja tão essencial para este programa.

Os ultimos dois piores tempos, o do Victor Souza pode-se atribuir tanto ao desempenho de disco quanto ao processador. Já Renan Castro possuia uma máquina virtual, o que prejudicou o desempenho.

## Benchmark 4: gnuplot

![gnuplot_tempo](/trabalho1/gnuplot_tempo.png "gnuplot")

![gnuplot_buscycles](/trabalho1/gnuplot_buscycles.png "gnuplot")

![gnuplot_tempo_cpuclock](/trabalho1/gnuplot_tempo_cpuclock.png "gnuplot")

### Análise primária
Fazendo uma primeira análise dos desempenhos de cada computador, podemos ver que o tempo de execução está diretamente ligado aos outros dois gráficos de _BusCycles_ e _CPU Clock_. Vemos que a máquina de Pedro Vasconcelos, um Raspberry Pi, se destaca pelo desempenho muito abaixo das outras máquinas. Também vemos a máquina de Pedro Grijó com desempenhos fora do comum, rápidos demais. Este provavelmente pode ter ocorrido erros ao executar o programa.

Sendo assim, estes dois serão descartados da análise detalahada.

### Segunda análise
![gnuplot_tempo](/trabalho1/gnuplot_tempo_detail.png "gnuplot")

![gnuplot_buscycles](/trabalho1/gnuplot_buscycles_detail.png "gnuplot")

![gnuplot_tempo_cpuclock](/trabalho1/gnuplot_tempo_cpuclock_detail.png "gnuplot")

Com os gráficos replotados a partir de apenas os dados dos computadores com desempenho mais notáveis, podemos fazer uma comparação e análise mais detalhada.

Vemos um comportamento bastante condizente entre as os gráficos, a ordem das máquinas são sempre as mesmas, assim como esperado. Um comportamento interessante são os quatro computadores com melhor desempenho. Apesar de terem processadores de diferentes patamares(_i3, i5_ e _i7_), tiveram tempos similares e com _Bus Cycles_ bem mais abaixo das outras máquinas.

##Benchmark 5: ordenação

![ordenacao_bubble](/trabalho1/ordenacao_bubble.png "ordenacao")

![ordenacao_quick](/trabalho1/ordenacao_quick.png "ordenacao")

![ordenacao_insertion](/trabalho1/ordenacao_insertion.png "ordenacao")

![ordenacao_selection](/trabalho1/ordenacao_selection.png "ordenacao")

> Written with [StackEdit](https://stackedit.io/).
