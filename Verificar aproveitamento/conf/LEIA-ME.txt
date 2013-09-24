O que é a pasta import e qual sua funcionalidade?
-------------------------------------------------------------------------------

A pasta fornece uma maneira muito fácil de alterar as configurações do seu emulador (servidor),
sem precisar alterar e/ou modificar os arquivos da pasta CONF. Com isso facilita você
a atualização do seu emulador (servidor). Você armazenar suas alterações,
e o resto é atualizado com o Cronus (geralmente através de GIT).

Como ele funciona?
-------------------------------------------------------------------------------

Coloque apenas as definições alteradas nos arquivos de importação.
Por exemplo, se você quiser alterar um valor em conf/battle/exp.conf:
* As rates do servidor:

// Taxa de experiência ganha em base. (Nota 2)
base_exp_rate: 10000

// Taxa de experiência ganha em classe. (Nota 2)
job_exp_rate: 10000

Ou seja, você copia apenas as definições que serão alteradas em seu servidor na pasta IMPORT "conf/import/battle_conf.txt",
e você eliminará possíveis problemas quando atualizar ou mudar de Emulador.

NOTA: As definições na pasta IMPORT terão "prioridade" sobre a pasta CONF, se não tiver definição serão utilizados os valores
definidos na pasta CONF (padrão)


Simples, não é?

- Mini-Tutorial by Ajarn / Euphy
- Tradução e informações adicionais Sem Sentido(Joelitos) 