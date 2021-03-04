# Nome do projeto
NOME_PROJ=maquina-de-estados

# Compilador
CC=gcc

# Flags para o compilador
CC_FLAGS=-W -Wall -pthread

# arquivos .c
C_SOURCE=$(wildcard src/*.c)

# Para compilar
build:
	$(CC) $(CC_FLAGS) $(C_SOURCE) -o $(NOME_PROJ)

# Para limpar
clean:
	@ rm $(NOME_PROJ)

# Para rodar
run:
	@ ./$(NOME_PROJ)