# ---------------------------------------------------------------------------
# Arquivo make para Trabalho prático [numero] de Estrutura de dados - UFMG 2023/1
# Autor: Samuel Brum Martins
# ---------------------------------------------------------------------------
# 
# ---------------------------------------------------------------------------

CXX := g++
CXXFLAGS := -Wall -c -Iinclude -pg -g

HEADERS := $(wildcard include/*.h)
SOURCES := $(wildcard scr/*.cpp)
OBJECTS := $(patsubst %.cpp, %.o, $(SOURCES))

PROJECT_NAME := fila
EXE := bin/$(PROJECT_NAME)

$(EXE): $(OBJECTS)
	$(CXX) -o bin/$(PROJECT_NAME) $(OBJECTS)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) $< -o $@

run: $(EXE)

clean:
	rm -f bin/$(PROJECT_NAME) scr/*.o