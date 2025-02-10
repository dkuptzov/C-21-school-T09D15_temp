CC=gcc
CFLAGS=-Wall -Werror -Wextra -c 
SOURCES=../data_libs/data_stat.c ../data_libs/data_io.c ../data_libs/sort.c ../data_module/data_process.c ../yet_another_decision_module/decision.c main_executable_module.c
QUEST_3=../../build/Quest_3
QUEST_5=../../build/Quest_5
STATIC=data_stat.a
FILEO=../data_libs/data_stat.o
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=main

all: $(SOURCES) $(EXECUTABLE)

$(QUEST_3): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(QUEST_3)

$(QUEST_5): $(OBJECTS)
	$(CC) $(OBJECTS) $(STATIC) -o $(QUEST_5)

build_with_static: $(STATIC) $(OBJECTS)
	$(CC) $(OBJECTS) $(STATIC) -o $(QUEST_6)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

$(STATIC): $(FILEO)
	ar cr $(STATIC) $(FILEO)

.o.c:
	$(CC) $(CFLAGS) $< -o $@

clean:
	-rm -rf *.o main

rebuild:
	-rm $(OBJECTS) $(STATIC) -rm $(OBJECTS) $(STATIC) data_stat.o data_process.o all
