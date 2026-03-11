# Nome do executável
EXEC = main
SRC = ../project2.c
# Lista de arquivos de teste
TESTS = $(wildcard *.in)

# Regra padrão: rodar todos os testes
all: run-tests

# Compilar o projeto
build: $(SRC)
	gcc -o $(EXEC) $(SRC)

# Rodar todos os testes
run-tests: build
	@for t in $(TESTS); do \
		echo "Rodando teste $$t..."; \
		./$(EXEC) < $$t > $$t.tmp; \
		if diff -q $$t.tmp $${t%.in}.out > /dev/null; then \
			echo "✔ Teste $$t passou"; \
		else \
			echo "✖ Teste $$t falhou"; \
			echo "Diferenças:"; \
			diff $$t.tmp $${t%.in}.out; \
		fi; \
		rm -f $$t.tmp; \
	done

clean:
	rm -f $(EXEC) *.tmp
