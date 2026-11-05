
\\Perguntas:


1\. Por que a estrutura escolhida é adequada para esse problema?

Porque o `for` permite repetir uma ação uma quantidade determinada de vezes. Nesse caso, precisamos receber exatamente 5 notas.

2\. O que aconteceria se a repetição fosse executada apenas quatro vezes?

O programa receberia somente 4 notas, deixando de considerar um aluno no cálculo da média.





Perguntas:

1\. O que acontece se o usuário acertar a senha na primeira tentativa?

O programa não executará o laço `while`, pois a senha já estará correta. O acesso será permitido.

2\. Por que essa situação pode ser resolvida com while?

Porque o `while` repete uma ação enquanto uma condição for verdadeira. Nesse caso, enquanto a senha estiver incorreta.

3\. Qual erro poderia fazer o programa entrar em um laço infinito?

Não atualizar a senha dentro do laço, fazendo com que o programa continue verificando sempre o mesmo valor incorreto.





Perguntas:

1\. Por que do while combina com esse problema?

Porque o menu precisa aparecer pelo menos uma vez, independentemente da opção escolhida.

2\. O que diferencia seu funcionamento do while?

O `do while` executa primeiro o bloco de comandos e depois verifica a condição. Já o `while` verifica a condição antes de executar os comandos.

3\. O que acontece se o usuário digitar 3 logo na primeira exibição?

O programa exibirá a mensagem de encerramento e finalizará sem mostrar o menu novamente.

 Parte 4 — Análise do código


1\. Qual será a saída do programa?

```text
1 2 3 4 5
```

2\. Quantas vezes o laço será executado?

Será executado 5 vezes, pois começa no número 1 e termina no número 5.

3\. O que aconteceria se retirássemos i++?

A variável `i` não seria incrementada. Como continuaria valendo 1, a condição `i <= 5` seria sempre verdadeira, causando um laço infinito.



