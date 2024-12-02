# include <stdio.h>
# include <string.h>

struct Aluno {
    char nome[50];
    int idade;
    float notaFinal;
};

struct Endereco {
    char rua[50];
    int numero;
};

struct Funcionario {
    char nome[50];
    struct Endereco endereco;
    float salario;
};

void limparBuffer() {
    while (getchar() != '\n');
}

int main() {
    struct Aluno alunos[5];
    struct Funcionario funcionario;

    for (int indiceAluno = 0; indiceAluno < 5; indiceAluno++) {
        printf("Digite o nome do aluno %d: ", indiceAluno + 1);
        if (indiceAluno > 0) limparBuffer();
        fgets(alunos[indiceAluno].nome, 50, stdin);
        alunos[indiceAluno].nome[strcspn(alunos[indiceAluno].nome, "\n")] = '\0';

        printf("Digite a idade do aluno %d: ", indiceAluno + 1);
        scanf("%d", &alunos[indiceAluno].idade);

        printf("Digite a nota final do aluno %d: ", indiceAluno + 1);
        scanf("%f", &alunos[indiceAluno].notaFinal);

        printf("\n");
    }

    printf("Dados dos Alunos:\n");
    for (int indiceAluno = 0; indiceAluno < 5; indiceAluno++) {
        printf("Aluno %d:\n", indiceAluno + 1);
        printf("Nome: %s\n", alunos[indiceAluno].nome);
        printf("Idade: %d\n", alunos[indiceAluno].idade);
        printf("Nota Final: %.2f\n\n", alunos[indiceAluno].notaFinal);
    }

    printf("Digite o nome do funcionário: ");
    limparBuffer();
    fgets(funcionario.nome, 50, stdin);
    funcionario.nome[strcspn(funcionario.nome, "\n")] = '\0';

    printf("Digite a rua onde o funcionário mora: ");
    fgets(funcionario.endereco.rua, 50, stdin);
    funcionario.endereco.rua[strcspn(funcionario.endereco.rua, "\n")] = '\0';

    printf("Digite o número da casa do funcionário: ");
    scanf("%d", &funcionario.endereco.numero);

    printf("Digite o salário do funcionário: ");
    scanf("%f", &funcionario.salario);

    printf("\nDados do Funcionário:\n");
    printf("Nome: %s\n", funcionario.nome);
    printf("Endereço: %s, %d\n", funcionario.endereco.rua, funcionario.endereco.numero);
    printf("Salário: R$%.2f\n", funcionario.salario);

    return 0;
}
