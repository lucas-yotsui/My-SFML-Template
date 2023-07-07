# Projeto em C++ com wxWidgets para Interface Gráfica

## Introdução

Este repositório é um template para criação de projetos em C++ com interface gráfica para usuário utilizando a biblioteca wxWidgets. Por ser configurado como um template no Github, é possível cloná-lo sem copiar as informações de controle de versão deste. Dessa forma, seu projeto criado a partir de um clone deste template é tratado como novo e suas informações de controle de versão serão exclusivamente referentes a ele.

## Criando seu Projeto

A melhor forma de criar seu novo projeto baseado neste template é através da interface do site Github ou da aplicação de linha de comando própria do Github, uma vez que o recurso de template é exclusivo deste. Para isso, siga as seguintes instruções: 

1. Entre na página do Github desse template.  

2. Clique no botão verde que diz **Use this template**.

![Usar este template](https://imgur.com/T2eswUz.png)

3. Clique na opção **Create a new repository**.

4. Escolha um nome e opcionalmente uma descrição para seu novo projeto.

![Criando seu repositório](https://imgur.com/dbtpLTF.png)

5. Escolha a visibilidade que deseja para o repositório do seu projeto.

6. Clique em **Create repository from template**.

_**Observação:** Pode ser usada a linha de comando convencional do Git, porém o repositório será clonado da forma padrão, incluindo todas as informações de versionamento e autoria do projeto. Nesse caso é necessário abrir a pasta onde foi clonado e deletar o diretório _.git_._

## Compilando e Executando

O projeto foi desenvolvido com o intuito de poder ser compilado em um ambiente Linux ou Windows, entretanto foi testado somente no Windows com MinGW, com Clang e GCC.

Conforme dito na introdução, o projeto foi desenvolvido utilizando CMake de tal forma que quando executado o comando para build, será instalado o wxWidgets automaticamente para compilação. Para isso, é clonado o repositório dessa biblioteca via Git e compilado, de forma a evitar a necessidade de possuir essa biblioteca instalada localmente. 

Essa decisão de projeto proporciona essa facilidade de automatizar o processo de obtenção da biblioteca e de sua ligação com o projeto, porém ao custo de tempos de compilação maiores.

O projeto foi desenvolvido tendo em mente o uso do editor **Visual Studio Code**, uma vez que sua extensão **Cmake Tools** facilita o uso de CMake para compilação, removendo a necessidade de uso de repetidos comandos via terminal. Além desta extensão, é recomendada também a extensão **C/C++ Extension Pack**, para usar colorização de destaque de sintaxe e outros recursos que facilitam o desenvolvimento em C/C++ _(Inclusive essa extensão já inclui a CMake Tools)_.

Utilizando o VS Code configurado desta forma, a compilação e execução do projeto é muito simples. Basta seguir o seguinte procedimento:

1. Abrir a pasta do projeto no editor.

2. Selecionar o kit de desenvolvimento usado pelo CMake.

![Selecione o kit desejado](https://imgur.com/f7UuZnn.png)

3. Aguardar a configuração inicial do CMake. Quando encerrada essa etapa, os recursos do wxWidgets já estão disponíveis para inclusão no código.

4. Basta agora compilar seu projeto com o comando **Build**. Para isso, clique neste botão da barra de utilidades da extensão CMake Tools.

![Compilar](https://imgur.com/8pqi8D7.png)

5. Encerrada a compilação, basta executar seu programa. Para isso, clique neste botão da barra de utilidades da extensão CMake Tools.

![Executar](https://imgur.com/c3KchnQ.png)

Incluso neste projeto está um arquivo _main.cpp_ contendo um programa de exemplo da biblioteca, o qual deve criar a seguinte janela no evento de compilação e execução bem-sucedidas:

![Programa de exemplo](https://imgur.com/JkwFMVF.png)

## Observações

1. A primeira configuração e compilação do projeto são sempre as mais demoradas, uma vez que nestes casos é necessário baixar e compilar wxWidgets novamente. Portanto, na medida do possível, evite apagar o diretório _build_, pois dessa forma, esta dependência ainda estará presente e pronta.

2. O projeto cria um link estático entre a biblioteca wxWidgets e seu projeto, dessa forma os executáveis criados são independentes e podem ser separados do computador em que foram compilados livremente.

3. A biblioteca wxWidgets possui uma licença completamente livre de direitos autorais. Logo, pode ser utilizada em projetos pessoais e comerciais sem nenhum tipo de tarifa.

## Considerações Finais

Caso possua alguma sugestão, dúvida ou encontre algum problema durante o uso deste template, por favor sinta-se a vontade para criar uma _**Issue**_ ou um _**Pull request**_.

Espero que este projeto lhe seja útil, especialmente para aqueles que ainda estão começando a aprender programação no geral ou especificamente em C++. A linguagem por si só pode ser intimidadora e complexa, sendo até mesmo seu processo de compilação muito complexo, há a compilação manual por comandos de terminal; CMake ou Makefiles para a criação de scripts automatizados, cada um com sua sintaxe e recursos específicos; link estático ou dinâmico de bibliotecas; múltiplos compiladores diferentes; etc.

Nesse cenário, a possibilidade de oferecer uma facilidade em parte desse processo é com certeza algo de muito auxílio no aprendizado desta poderosa, porém complexa ferramenta. 

Espero também que a documentação seja eficiente para entender não somente como utilizar o projeto, mas também seu funcionamento e lógica subjacente, para que possibilite aprender um pouco mais sobre a ferramenta CMake e o processo de compilação de um programa em C/C++.