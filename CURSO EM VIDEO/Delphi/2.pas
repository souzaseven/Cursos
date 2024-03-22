program BoasVindas;

{$APPTYPE CONSOLE}

uses
  SysUtils;

var
  Nome: string;
begin
  Write('Qual é o seu nome? ');
  Readln(Nome);
  Writeln('Olá ', Nome, ', é um prazer te conhecer!');
  Readln; // Aguarda o usuário pressionar Enter antes de fechar o console
end.
