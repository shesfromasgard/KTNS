# Keep Tools Needes Soonest (KTNS)

O KTNS disponibilizado neste repositório é para resolução do subproblema de ferramentas (Tooling Problem, TP) do Problema de Sequenciamento de Tarefas e Trocas de Ferramentas (Job Sequencing and Tool Switching Problem, SSP).

Esse código foi adaptado do KTNS disponibilizado por [Soares e Carvalho (2020)](https://doi.org/10.1016/j.ejor.2020.02.047) para ser executado corretamente no Windows.

As instâncias usadas para teste nesse protótipo foram tiradas da tabela 1 de [Crama et al. (1994)](https://doi.org/10.1007/BF01324874) e estão localizadas na pasta [input](https://github.com/shesfromasgard/KTNS/tree/main/input). Caso queira testar outras instâncias outras instâncias para teste, adicione-as à sua pasta de entrada. As soluções serão impressas em arquivos de texto individuais na pasta de saída escolhida no comando de execução.

Para compilar o código, use o comando:

```
g++ run.cpp -o run -std=c++17
```

Para rodar o código, use o comando:

```
.\run .\{diretório_instâncias_entrada} .\{diretório_instâncias_saída)
```

