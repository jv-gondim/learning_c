## Principios básicos de C

    C é uma linguagem compilada criada em 1972 por Dennis Ritchie para desenvolvimento do sistema operacional Unix. 
    E uma linguagem muito popular e existe poucas arquiteturas aonde nao exista compiladores para C. 
    É muito usada para trabalhar com microprocessadores. As principais caractericas de C sao:

        * É uma linguagem compilada 
        * Está em algum nivel(Parte da comundade fala que é alta, outra que é baixo e outros, ainda, falam que é media. Entao nao existe consenso.)
        * De propósito geral
        * Estruturada
        * Imperativa(O progama é feito através de ordens que a maquina **tem** que executar.)
        * Procedural(O código consiste em procedimentos que expressam um conjunto de passos que o computador deve executar.)
        * De tipagem estática(O tipo da variavel é definido durante a compilaçao.)
        * Eficiente
        * Portável
        * Flexível
        * Integrada a sistemas "Unix-like"(Grande parte do kernel do sistema operacional Linux foi feita em C) 

    C é uma linguagem compilada e existem varias compiladores para ele. O GCC ou GNU Compiler Collection é um dos mais famosos.

        * O GCC é uma coleção de compiladores para diversas linguagens e arquiteturas.
        * Escrito originalmente por Richard Stallman para ser o compilador do Projeto GNU (1987).
        * Em 1997, desenvolvedores insatisfeitos com o GCC fizeram o fork EGCS, aceito em 1999 como a versão oficial do GCC.
        * E importa ressaltar que existem varios outros compiladores para C como o TCC e etc
    
    Esse e o comando para se compilar progamas usando o GCC através do terminal:
        
         :~$ gcc -Wall <fontes.c> -o <destino> 

    Isso produz o binário executável <destino> na
        mesma pasta dos arquivos <fontes.c>.

    Para executá-los:

         :~$ ./programa


### Tipos de Dados

    Na linguagem C, nós trabalhamos com tipos 'primitivos', 'modificados' e 'definidos pelo usuário'.

    Os tipos primitivos:

        * int    - valores numéricos inteiros
        * char   - caracteres (podem ser escritos com os caracteres corespondente na tabela ASCII, mas sinceramente porque?)
        * float  - números de ponto flutuante(numeros que possuem casas decimais)
        * double - números de dupla precisão
        * void   - tipo sem valor (vazio)

    Os qualificadores modificam os tipos quanto...

        * ao tamanho - short e long
        * ao sinal   - signed e unsigned
    
    Tipos definidos a partir dos tipos primitivos:

        * arrays  - agrupamento de dados do mesmo tipo
        * strings - arrays de caracteres

    Tipos definidos pelo usuário:

        * Estruturas e uniões
        * Enumerações

    **Também existe os Números booleanos**

        *Em C, qualquer inteiro diferente de zero é considerado verdadeiro.
        *A declaração de uma variável do tipo '_Bool' faz com que valores verdadeiros sejam "traduzidos" para o valor 1 e os falsos para o valor 0, ambos com 1 byte de tamanho.
        * Com o cabeçalho 'stdbool.h', nós podemos escrever constantes booleanas como 'true' e 'false', ambas com 4 bytes de tamanho.
        * O cabeçalho também fornece um alias para a palavra-chave '_Bool': 'bool'.

##### Alguns detalhes dos tipos primitivos e seus espaçamento na mémoria

     Importante ressaltar que todos os tipos primitivos, inclusive o caracter, todos sao número e bytes. 
     Mas, o tamanho e a faixa de valores depende do computador e do compilador utilizado. 
     O padrão ANSI C determina somente um intervalo de valores mínimo para cada tipo de dado, com exceção de void, os outros tipos de dados primitivos podem ter modificadores. 
     Os modificadores alteram o tamanho do tipo de dado ou sua forma de representação. Sua utilização faz com que seja possível adequar-se melhor às necessidades de armazenamento de dados em determinados casos.


    Tipo inteiro(int)

        * Representa números inteiros positivos e negativos.  
        * Tamanho na memória (x86_64): 4 bytes
        * Limites:
            
            MIN: -2147483648
            MAX:  2147483647

        * Constante int (literal):

            - Qualquer número inteiro decimal, octal ou hexadecimal dentro dos limites do tipo int;
            - Não possuem ponto (.) nem expoente (e/E);
            - Está sujeita a 'promoção' caso expresse um valor maior do que o limite do tipo 'int' sem modificadores:
                
            : int --> long int --> unsigned long int

            - Pode ser terminada com as letras 'l/L', 'u/U', ou ambas, para explicitar a faixa de valores.
    
    Tipo caracter(ou inteiros de 1 bytes)
        
        * Para o compilador, um caractere é sempre um inteiro de 1 byte de tamanho.
        * Tamanho na memória (x86_64): 1 byte
        * Limites:
        
            MIN: -128
            MAX:  127

        * Constante 'char' (literal):

            - Qualquer caractere da tabela ASCII entre aspas simples;
            - Uma constante caractere sempre será vista como uma constante inteira e terá o tamanho de 4 bytes
            - Portanto, qualquer inteiro na faixa de valores da tabela ASCII pode ser usado para representar uma constante caractere.

    Números de ponto flutuante (tipo 'float')

        * Possuem casas decimais separadas por ponto.
        * Podem ser expressos com notação de expoente.
        * Tamanho na memória (x86_64): 4 bytes
        * Limites:
        
            MIN: 1.175494e-38
            MAX: 3.402823e+38

        * Constante 'float' (literal):

            - Devem ter ao menos um dígito;
            - Deve ter um ponto decimal;
            - Expoente deve ser seguido de ao menos um dígito;
            - Por padrão, constantes 'float' são identificadas como sendo do tipo 'double'!
            - Para especificar que se trata de um 'float', podemos terminar a constante com a letra 'f/F'. 
            - A terminação 'l/L' fará com que uma constante com ponto flutuante seja reconhecida como do tipo long double(16 bytes).

    Números de dupla precisão (o tipo 'double')

        * São exatamente como o tipo 'float', só que com mais bytes para:
    
            - Expressar uma faixa maior de números;
            - Apresentar resultados com mais precisão.
  
        * Tamanho na memória (x86_64): 8 bytes
        * Limites:
  
            MIN: 2.22507e-308
            MAX: 1.79769e+308

        * Precisão do arredondamento:

            - float      :  6 casas decimais
            - double     : 15 casas decimais
            - long double: 18 casas decimais

    

### Constantes

    Na linguagem C, as 'constantes' são qualquer entidade que expresse um valor imutável, enquanto uma 'variável' é uma entidade que pode ter seu valor alterado.

    São constantes...

        * Representações literais de um valor
        * Constantes simbólicas
        * Arrays
        * Ponteiros
        * Estruturas
        * Uniões
        * Enumerações

    Variáveis

        * São identificadores para dados na memória.
        * Precisam ser declaradas.

    Identificadores

        * Contém apenas caracteres alfunuméricos e o '_'
        * Primeiro caractere tem que ser uma letra ou '_'
        * Não pode ser uma palavra reservada
        
### Operadores

    A linguagem C trabalha com praticamente os mesmos operadores básicos de qualquer outra linguagem:

        * Operadores de atribuição
        * Operadores aritméticos
        * Operadores relacionais
        * Operadores lógicos
        * Operadores condicionais
    
    Além desses grupos, outros operadores sao muito comuns na linguagem C são:

        : *var     - Aponta para uma variável (indireção)
        : &var     - Retorna o endereço de uma variável
        : sizeof() - Retorna o tamanho de uma variável

### Instruções

    As instruções na linguagem C são delimitadas pelo caractere ';'.
        
    Não utilizamos o ponto-e-vírgula após:

        * Funções
        * Estruturas de decisão
        * Estruturas de repetição
        * Diretivas do pré-processador

    Tem seus blocos delimitados por chaves:

        * Funções
        * Estruturas condicionais
        * Estruturas de repetição
        * A definição de uma array
        * A definição de uma estrutura (struct)
        * A definição de uma união
        * A definição de uma enumeração

### Funções

    * Uma função é um agrupamento de instruções destinado a realizar uma tarefa específica.
    * Todo programa em C consiste em uma ou mais funções e deve ter pelo menos a função main() a função **principal**.
    * Todo programa em C é executado na função main().
    
    Bibliotecas

        * A linguagem C dispõe de várias bibliotecas contendo funções e outras definições para as mais diversas finalidades.

        * As funções da biblioteca 'glibc' são divididas em vários arquivos de cabeçalho, cada um contendo funções e definições para conjuntos de tarefas específicas.
            
        * Os cabeçalhos são incluídos no código pela diretiva...
        
                 #include <arquivo.h>
        
    Funções definidas pelo usuário

        * Nós podemos criar nossas próprias funções.

### Estruturas de decisão

    Cláusulas if/else if/else 

        * Podem ou não preceder um agrupamento de instruções.
        * Sem o agrupamento, precedem apenas uma instrução.
        
    Cláusula switch/case

        * É uma instrução multiderecional para lidar com decisões.  
        * Trabalha comparando o valor de uma expressão mcom as constantes nas cláusulas 'case'. 
        * As instruções em cada cláusula 'case' serão executadas até que se encontre uma instrução *'break'*.

### Estruturas de repetição

    Loop while

        * Executa uma instrução ou um  grupo de instruções enquanto dada condição for verdadeira.  
        * A condição é testada antes do próximo ciclo.
        
    Loop do/while

    * Idêntico ao loop while, mas testa a condição após o último ciclo.
    
    Loop for

    * Executa um grupo de instruções de forma controlada por três expressões. 
    * Dado um valor inicial e uma condição, executa um ciclo de instruções, opera a terceira expressão e faz uma nova avaliação da condição para decidir se haverá outro ciclo.

### Escopo

    Em C, as variáveis podem ser declaradas em três locais do código:
      
        - Dentro de um bloco ou de uma função;
        - Fora de todas as funções;
        - Nos parâmetros formais de uma função.

    O local onde elas são declaradas determinará a sua visibilidade em relação a outras partes do código -- isso se chama "escopo".
    
    * Variáveis locais

        - Variáveis declaradas dentro de blocos e funções terão visibilidade "local", ou seja, seus escopos limitam-se ao bloco ou à função onde tiverem sido d declaradas.
        - Variáveis declaradas nos parâmetros formais são locais para as funções a que pertencem.

    * Variáveis globais

        - Variáveis declaradas fora de qualquer função, terão escopo "global", ou seja, elas poderão ser acessadas de qualquer parte do código.
