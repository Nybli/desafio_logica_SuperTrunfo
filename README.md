**🃏 Desafio Super Trunfo - Países 🌍**

Um jogo interativo em linguagem **C** onde você compara cartas de países com base em diferentes atributos. Inspirado no clássico **Super Trunfo**, o jogo permite comparar dois países e determinar o vencedor de acordo com o atributo escolhido.

## 🚩 Objetivos

- **Cadastro de Cartas**: Permite ao usuário cadastrar **duas cartas** de países com as seguintes informações:
  - **Nome do país**
  - **População**
  - **Área (em km²)**
  - **PIB (em bilhões de reais)**
  - **Número de pontos turísticos**

- **Menu Interativo**: Usuário escolhe os **atributos que deseja comparar**.

- **Comparação de Cartas**: O programa determina o vencedor baseado no atributo selecionado:
  - **Maior valor vence**, exceto para **Densidade Populacional**, onde **o menor valor vence**.

- **Exibição de Resultados**: Após a comparação, o sistema exibe:
  - Qual carta venceu
  - Qual atributo foi utilizado
  - A regra aplicada

## 📥 Atributos das Cartas

- **População**
- **Área (km²)**
- **PIB (bilhões de reais)**
- **Pontos Turísticos**
- **Densidade Populacional**

## 📥 Entrada de Dados

- Os dados das cartas são inseridos **manualmente via terminal**.
- O sistema solicitará **interativamente** as informações de cada carta.

## 📤 Saída de Dados

- Os atributos escolhidos são exibidos de forma **organizada**.
- O resultado da comparação é mostrado, indicando:
  - 🏆 **O país vencedor**
  - 📌 **O atributo utilizado**
  - ⚖️ **A regra aplicada** (**maior ou menor valor**)

## 📚 Regras do Jogo

- Cada carta representa um **país**.
- O jogador escolhe **um atributo** para comparar.
- O país com o **melhor valor vence a rodada**:
  - Para **População**, **Área**, **PIB** e **Pontos Turísticos** → **Maior valor vence**
  - Para **Densidade Populacional** → **Menor valor vence** ✅
