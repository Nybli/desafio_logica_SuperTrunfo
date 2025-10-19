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

- **Comparação de Cartas**: O programa determina o vencedor baseado nos atributos selecionados:
  - **Maior valor vence**, exceto para **Densidade Populacional**, onde **o menor valor vence**.

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

- **Exibição de Resultados**: Após a comparação, o sistema exibe:
  - O nome dos dois países
  - Os dois atributos usados na comparação
  - Os valores de cada atributo para cada carta
  - A soma dos atributos para cada carta
  - Qual carta venceu (ou se houve empate)

## 📚 Regras do Jogo

- Cada carta representa um **país**.
- O jogador escolhe **dois atributos** para comparar.
- O país com o **melhor valor vence a rodada**:
  - Para **População**, **Área**, **PIB** e **Pontos Turísticos** → **Maior valor vence**
  - Para **Densidade Populacional** → **Menor valor vence** ✅
