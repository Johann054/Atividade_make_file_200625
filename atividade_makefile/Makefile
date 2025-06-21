# Makefile com 4 targets

# Nome do executável
PROG = calculadora

# Compilador
CC = gcc

# Flags de compilação
CFLAGS = -Wall -g

# Target 1: compilar o programa
all: $(PROG)

$(PROG): calculadora.c
	$(CC) $(CFLAGS) calculadora.c -o $(PROG)

# Target 2: executar o programa
run: $(PROG)
	./$(PROG)

# Target 3: limpar arquivos de compilação
clean:
	rm -f $(PROG)

# Target 4: mostrar informações do diretório (2 comandos Linux)
info:
	@echo "Listando arquivos no diretório:"
	ls -lh
	@echo "Espaço em disco:"
	df -h .
