/*
SELECT com Junção Externa (LEFT JOIN, RIGHT JOIN, FULL JOIN):
Retorna todos os registros de uma tabela e os registros correspondentes de outra tabela.
*/

SELECT t1.coluna, t2.coluna FROM tabela1 t1 LEFT JOIN tabela2 t2 ON t1.coluna = t2.coluna;
