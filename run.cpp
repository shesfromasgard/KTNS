#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

unsigned int m, n, c;

// SEQUÊNCIA DE ENTRADAS
// M - número de ferramentas
// N - número de tarefas
// C - capacidade do magazine
// matrix - matriz de ferramentas [m][n]
// tool life - vida útil de cada ferramenta do conjunto [m]
// executionTime - tempo de execução de cada tarefa [n]

vector<vector<int>> matrix;
vector<int> toolLife;
vector<int> executionTime;

ifstream input("input.txt");
ofstream output("output.txt");

long KTNS(bool debug);

int main() {


    if(!input.is_open()) {
        cerr << "Erro ao abrir o arquivo de entrada." << endl;
        return 1;
    }

    if(!output.is_open()) {
        cerr << "Erro ao abrir o arquivo de saída." << endl;
        return 1;
    }

    input >> m >> n >> c;

    matrix.resize(m, vector<int>(n));
    toolLife.resize(m);
    executionTime.resize(n);

    for(int i = 0; i < m; ++i) {
        input >> toolLife[i];
        output << toolLife[i] << " ";
    }

    output << endl;

    for(int i = 0; i < n; ++i) {
        input >> executionTime[i];
        output << executionTime[i] << " ";
    }

    output << endl;

    for(int i = 0; i < m; ++i)
        for(int j = 0; j < n; ++j)
            input >> matrix[i][j];

    output << "Deu super certo!" << endl;

    KTNS(true);

    return 0;
}

long KTNS(bool debug = false) {

    vector<int> loaded(n, 0);
    int u = 0;

    int priorities[n][m];
    int magazine[n][m];

    if(debug) {
        output << endl << "Teste" << endl;
    }

    return 0;
}