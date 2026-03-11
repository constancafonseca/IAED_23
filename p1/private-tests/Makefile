# Nome do executável
EXEC = main
SRC = ../proj1.c

# Lista de arquivos de teste
TESTS = $(wildcard *.in)

# Regra padrão: rodar todos os testes
all: run-tests

# Compilar o projeto
build: $(SRC)
	gcc -o $(EXEC) $(SRC)

# Rodar todos os testes
run-tests: build
	@total=0; passed=0; \
	for t in $(TESTS); do \
		total=$$((total+1)); \
		echo "Rodando teste $$t..."; \
		./$(EXEC) < $$t > $$t.tmp; \
		if diff -q $$t.tmp $${t%.in}.out > /dev/null; then \
			echo "✔ Teste $$t passou"; \
			passed=$$((passed+1)); \
		else \
			echo "✖ Teste $$t falhou"; \
			echo "Diferenças:"; \
			diff $$t.tmp $${t%.in}.out; \
		fi; \
		rm -f $$t.tmp; \
	done; \
	echo ""; \
	echo "Resultado final: $$passed/$$total testes passaram"

clean:
	rm -f $(EXEC) *.tmp