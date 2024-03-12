/*
SELECT com Junção de Tabelas (JOIN):
Combina colunas de duas ou mais tabelas com base em uma condição relacionada entre elas.
*/

SELECT t1.coluna, t2.coluna FROM tabela1 t1 INNER JOIN tabela2 t2 ON t1.coluna = t2.coluna;
