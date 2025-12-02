# Coleção de Projetos Arduino Testados e Validados para Eletrônica Aplicada

Este repositório reúne uma seleção de projetos Arduino desenvolvidos, testados e validados experimentalmente. Os projetos abrangem aplicações em instrumentação eletrônica, radiofrequência, automação didática, telecomunicações de baixa frequência e monitoramento ambiental. Todos os circuitos, códigos e instruções foram avaliados em bancada, garantindo reprodutibilidade e clareza metodológica.

A finalidade deste repositório é servir como base de estudos, referência técnica e material didático para alunos, entusiastas, radioamadores, técnicos e pesquisadores em eletrônica.

---

## Conteúdo do Repositório

### 1. Botão Arduino (Entrada Digital Fundamental)
Implementação mínima e validada de leitura digital com debouncing, ideal para estudos introdutórios de eletrônica digital e interação homem-máquina.

### 2. Sistema de Game Show – “Guerra de Botão”
Projeto inspirado em programas como *Quem Sabe Sabe* e *Passa ou Repassa*.  
Funções implementadas:
- Reconhecimento do primeiro competidor a apertar o botão  
- Bloqueio automático dos demais competidores  
- Indicação visual por LEDs  
- Lógica determinística e de baixa latência

### 3. Transmissor de 500 kHz para Calibração de Bobinas FI
Transmissor de baixa potência para 455–500 kHz utilizado em procedimentos de alinhamento de estágios intermediários (FI) em rádios valvulados e receptores do tipo AA5.  
Inclui:
- Sinal estabilizado  
- Modo modulado e não modulado  
- Uso para calibração de filtros, transformadores FI e etapas de detecção

### 4. Transmissor AM de 1 MHz
Transmissor experimental de baixa potência destinado a testes, calibração de receptores AM e demonstrações acadêmicas.  
Aplicações:
- Calibragem de osciladores locais  
- Estudos de modulação AM  
- Ensaios educacionais de propagação em MF  
(Observação: uso estritamente didático; respeitar legislações locais.)

### 5. Frequencímetro via Monitor Serial
Conversão de um Arduino Nano em um frequencímetro capaz de medir aproximadamente 455 kHz até cerca de 1 MHz, com leitura em tempo real no monitor serial.  
Inclui:
- Algoritmo de contagem de pulsos  
- Correção por fator de calibração  
- Notas de precisão e limitações de hardware

### 6. Sistema Web de Temperatura e Humidade (DHT11)
Monitoramento ambiental com:
- Leitura de temperatura e humidade  
- Exposição das informações via página HTML simples  
- Comunicação pela porta serial ou módulo auxiliar de rede  
- Arquitetura clara para integração com IoT

---

## Objetivos do Repositório

- Disponibilizar projetos Arduino validados empiricamente.  
- Documentar circuitos úteis para ensino técnico, engenharia e manutenção eletrônica.  
- Fornecer uma biblioteca crescente de aplicações práticas baseadas em microcontroladores.  
- Servir como referência para experimentos envolvendo RF de baixa frequência, AM analógica e instrumentação digital.

---


