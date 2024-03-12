/*
SELECT com Cláusula HAVING:
Filtra resultados de grupos criados pela cláusula GROUP BY.
*/

SELECT coluna, COUNT(*) FROM tabela GROUP BY coluna HAVING condicao;
